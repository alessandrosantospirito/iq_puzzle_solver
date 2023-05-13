#include "matrix.h"
#include <vector>
#include <algorithm>

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

int calculate_zero_cols_starting_bottom(Matrix matrix) {
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

// Matrix align_matrix_on_xy_axis(Matrix matrix) {
//     int rows = matrix_row_count(matrix);
//     int cols = matrix_col_count(matrix);

//     int zero_rows = 0;
//     int zero_cols = 0;

//     for(int i = 0; i < rows; i++) {
//         for(int j = 0; j < cols; j++) {
//             if(matrix[i][j] != 0) {
//                 break;
//             }
//         }
//         zero_cols ++;
//     }

//     if(zero_cols == rows - 1) {
//         return matrix;
//     }

//     for(int j = cols - 1; j >= 0; j--) {
//         for(int i = 0; i < rows; i++) {
//             if(matrix[i][j] != 0) {
//                 break;
//             }
//         }
//         zero_rows ++;
//     }

//     Matrix result(cols, std::vector<int>(rows));

//     for(int i = 0; i < rows - zero_cols; i++) {
//         for(int j = cols - 1; j >= zero_rows; j++) {
//             result[i][j] = matrix[i][j - zero_rows];
//         }
//     }

//     return result;
// }