#include "matrix.h"
#include <vector>
#include <algorithm>
#include <iostream>

int matrix_row_count(Matrix matrix) {
    return matrix.size();
}

int matrix_col_count(Matrix matrix) {
    return matrix[0].size();
}

Matrix rotate_matrix_clockwise(Matrix matrix) {
    int rows = matrix_row_count(matrix);
    int cols = matrix_col_count(matrix);

    Matrix result(cols, std::vector<int>(rows));

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            result[j][rows - i - 1] = matrix[i][j];
        }
    }

    return result;
}

Matrix flip_matrix_vertical(Matrix matrix) {
    for(auto& row: matrix) {
        reverse(row.begin(), row.end());
    }

    return matrix;
}

int calculate_zero_rows_starting_bottom(Matrix matrix) {
    int rows = matrix_row_count(matrix);
    int cols = matrix_col_count(matrix);

    int zero_rows = 0;

    bool breakFlag = false;
    for(int i = rows - 1; i >= 0; i--) {
        for(int j = 0; j < cols; j++) {
            if(matrix[i][j] != 0) {
                breakFlag = true;
                break; 
            }
        }
        if (breakFlag) {
            break;
        }
        zero_rows ++;
    }

    return zero_rows;
}

int calculate_zero_cols_starting_left(Matrix matrix) {
    int rows = matrix_row_count(matrix);
    int cols = matrix_col_count(matrix);

    int zero_cols = 0;

    bool breakFlag = false;
    for(int j = 0; j < cols; j++) {
        for(int i = rows - 1; i >= 0; i--) {
            if(matrix[i][j] != 0) {
                breakFlag = true;
                break; 
            }
        }
        if (breakFlag) {
            break;
        }
        zero_cols ++;
    }

    return zero_cols;
}

Matrix align_matrix_on_x_axis(Matrix matrix) {
    int rows = matrix_row_count(matrix);
    int cols = matrix_col_count(matrix);

    int zero_rows = calculate_zero_rows_starting_bottom(matrix);

    Matrix result;

    for(int i = 0; i <= rows - zero_rows - 1; i++) {
        for(int j = 0; j <= cols - 1; j++) {
            // No out of bound exeception possible iff  zero_rows >= 0 and rows >= 1:
            // bounded: [row - i - 1 >= (rows - (rows - zero_rows - 1) - 1) = zero_rows >= 0, rows - i - 1 <= rows - 1]
            // bounded: [(rows - zero_rows -1) = rows - 1 - zero_rows, (rows - zero_rows - 1) - (rows - zero_rows - 1)) = 0]
            result[rows - i - 1][j] =  matrix[(rows - zero_rows - 1) - i][j];
        }
    }

    return result;
}

Matrix align_matrix_on_y_axis(Matrix matrix) {
    int rows = matrix_row_count(matrix);
    int cols = matrix_col_count(matrix);

    int zero_cols = calculate_zero_rows_starting_bottom(matrix);

    Matrix result;

    for(int i = 0; i <= rows - 1; i++) {
        for(int j = zero_cols; j <= cols - 1; j++) {
            // No out of bound exeception possible iff  zero_cols >= 0:
            // bounded: [j >= zero_cols, j <= cols - 1]
            result[i][j] =  matrix[i][j];
        }
    }

    return result;
}

Matrix align_matrix_on_xy_axis(Matrix matrix) {

    matrix = align_matrix_on_x_axis(matrix);
    matrix = align_matrix_on_y_axis(matrix);

    return matrix;
}