#include "test_data_matrices.hpp"

typedef std::vector<std::vector<int>> Matrix;

Matrix L = {{1, 0, 0}, {1, 0, 0}, {1, 1, 1}};
Matrix L_rotated = {{1, 1, 1}, {1, 0, 0}, {1, 0, 0}};
Matrix L_rotated_twice = {{1, 1, 1}, {0, 0, 1}, {0, 0, 1}};
Matrix L_rotated_thrice ={{0, 0, 1}, {0, 0, 1}, {1, 1, 1}};

Matrix L_flipped = {{0, 0, 1}, {0, 0, 1}, {1, 1, 1}};
Matrix L_rotated_flipped = {{1, 1, 1}, {0, 0, 1}, {0, 0, 1}};
Matrix L_rotated_twice_flipped = {{1, 1, 1}, {1, 0, 0}, {1, 0, 0}};
Matrix L_rotated_thrice_flipped = {{1, 0, 0}, {1, 0, 0}, {1, 1, 1}};

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

std::vector<Matrix> all_L_tiles = {
    L, L_rotated, L_rotated_twice, L_rotated_thrice,
    L_flipped, L_rotated_flipped, L_rotated_twice_flipped, L_rotated_thrice_flipped
};

std::set<Matrix> all_unique_L_tiles = {
    L, L_rotated, L_rotated_twice, L_rotated_thrice,
    L_rotated_thrice_flipped
};
