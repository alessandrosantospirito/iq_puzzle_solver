#include <gtest/gtest.h>
#include <vector>
#include "../src/matrix.h"

// std::vector<std::vector<int>> L = {{1, 0, 0}, {1, 0, 0}, {1, 1, 1}};
// std::vector<std::vector<int>> L_flipped = {{0, 0, 1}, {0, 0, 1}, {1, 1, 1}};
// std::vector<std::vector<int>> L_rotated = {{1, 1, 1}, {1, 0, 0}, {1, 0, 0}};
// std::vector<std::vector<int>> L_prime = {{0, 1, 0}, {0, 1, 1}, {0, 0, 0}};
// std::vector<std::vector<int>> L_prime_aligned = {{0, 0, 0}, {1, 0, 0}, {1, 1, 0}};

TEST(MatrixTest, Rotation) {
    Matrix a = {{1, 2}, {3, 4}};
    Matrix expected = {{3, 1}, {4, 2}};  // this is what we expect after rotating 'a' clockwise

    Matrix result = rotate_matrix_clockwise(a);

    ASSERT_EQ(result, expected);
}