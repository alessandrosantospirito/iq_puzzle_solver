#include <gtest/gtest.h>
#include <vector>
#include "../src/matrix.h"

Matrix L = {{1, 0, 0}, {1, 0, 0}, {1, 1, 1}};
Matrix L_flipped = {{0, 0, 1}, {0, 0, 1}, {1, 1, 1}};
Matrix L_rotated = {{1, 1, 1}, {1, 0, 0}, {1, 0, 0}};
Matrix L_prime = {{0, 1, 0}, {0, 1, 1}, {0, 0, 0}};
Matrix L_prime_aligned_x = {{0, 0, 0}, {0, 1, 0}, {0, 1, 1}};
Matrix L_prime_aligned_y = {{1, 0, 0}, {1, 1, 0}, {0, 0, 0}};
Matrix L_prime_aligned_xy = {{0, 0, 0}, {1, 0, 0}, {1, 1, 0}};
Matrix M = {{0, 0}, {0, 0}};
Matrix M_prime = {{0, 1}, {0, 0}};
Matrix N = {{1}, {2}, {3}, {4}};
Matrix K = {{1, 2, 3, 4}};
Matrix Q = {{0, 0, 1}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}};
Matrix Q_aligned_x = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 1}};
Matrix Q_aligned_y = {{1, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}};
Matrix Q_aligned_xy = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {1, 0, 0}};

TEST(MatrixTest, RotationL) {
    ASSERT_EQ(L_rotated, rotate_matrix_clockwise(L));
}

TEST(MatrixTest, FlippL) {
    ASSERT_EQ(L_flipped, flip_matrix_vertical(L));
}

TEST(MatrixTest, RowCountL) {
    ASSERT_EQ(3, matrix_row_count(L));
}

TEST(MatrixTest, ColCountL) {
    ASSERT_EQ(3, matrix_col_count(L));
}

TEST(MatrixTest, RowCountM) {
    ASSERT_EQ(2, matrix_row_count(M));
}

TEST(MatrixTest, ColCountM) {
    ASSERT_EQ(2, matrix_row_count(M));
}

TEST(MatrixTest, RowCountN) {
    ASSERT_EQ(4, matrix_row_count(N));
}

TEST(MatrixTest, ColCountN) {
    ASSERT_EQ(1, matrix_col_count(N));
}

TEST(MatrixTest, RowCountK) {
    ASSERT_EQ(1, matrix_row_count(K));
}

TEST(MatrixTest, ColCountK) {
    ASSERT_EQ(4, matrix_col_count(K));
}

TEST(MatrixTest, CountZeroRowsStartingBottomM) {
    ASSERT_EQ(2, calculate_zero_rows_starting_bottom(M));
}

TEST(MatrixTest, CountZeroColsStartingLeftM) {
    ASSERT_EQ(2, calculate_zero_cols_starting_bottom(M));
}

TEST(MatrixTest, CountZeroRowsStartingBottomQAligned) {
    ASSERT_EQ(0, calculate_zero_rows_starting_bottom(Q_aligned));
}

TEST(MatrixTest, CountZeroColsStartingLeftQAligned) {
    ASSERT_EQ(0, calculate_zero_cols_starting_bottom(Q_aligned));
}

TEST(MatrixTest, CountZeroRowsStartingBottomMPrime) {
    ASSERT_EQ(1, calculate_zero_rows_starting_bottom(M_prime));
}

TEST(MatrixTest, CountZeroColsStartingLeftMPrime) {
    ASSERT_EQ(1, calculate_zero_cols_starting_bottom(M_prime));
}

TEST(MatrixTest, CountZeroRowsStartingBottomQ) {
    ASSERT_EQ(3, calculate_zero_rows_starting_bottom(Q));
}

TEST(MatrixTest, CountZeroColsStartingLeftQ) {
    ASSERT_EQ(2, calculate_zero_cols_starting_bottom(Q));
}

TEST(MatrixTest, AlignedLOnXAxisPrime) {
    ASSERT_EQ(L_prime_aligned_x, align_matrix_on_x_axis(L_prime));
}

TEST(MatrixTest, AlignedOnXAxisQ) {
    ASSERT_EQ(Q_aligned_x, align_matrix_on_x_axis(Q));
}

// TEST(MatrixTest, AlignedLPrime) {
//     ASSERT_EQ(L_prime_aligned_xy, align_matrix_on_xy_axis(L_prime));
// }

// TEST(MatrixTest, AlignedQ) {
//     ASSERT_EQ(Q_aligned_xy, align_matrix_on_xy_axis(Q));
// }
