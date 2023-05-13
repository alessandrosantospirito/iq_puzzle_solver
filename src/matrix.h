#include <vector>

typedef std::vector<std::vector<int>> Matrix;

Matrix rotate_matrix_clockwise(Matrix);
Matrix flip_matrix_vertical(Matrix);
Matrix align_matrix_on_xy_axis(Matrix);
int calculate_zero_rows_starting_bottom(Matrix);
int calculate_zero_cols_starting_bottom(Matrix);
int matrix_row_count(Matrix);
int matrix_col_count(Matrix);
void display_matrix(Matrix);
