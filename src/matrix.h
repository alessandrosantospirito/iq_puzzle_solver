class Matrix {
    std::vector<std::vector<int>> matrix;

    Matrix rotate_matrix_clockwise(Matrix);
    Matrix flip_matrix_vertical(Matrix);
    Matrix align_matrix_on_xy_axis(Matrix);
    void display_matrix(Matrix);
}