#include <gtest/gtest.h>
#include <vector>

std::vector<std::vector<int>> L = {{1, 0, 0}, {1, 0, 0}, {1, 1, 1}};
std::vector<std::vector<int>> L_flipped = {{0, 0, 1}, {0, 0, 1}, {1, 1, 1}};
std::vector<std::vector<int>> L_rotated = {{1, 1, 1}, {1, 0, 0}, {1, 0, 0}};
std::vector<std::vector<int>> L_prime = {{0, 1, 0}, {0, 1, 1}, {0, 0, 0}};
std::vector<std::vector<int>> L_prime_aligned = {{0, 0, 0}, {1, 0, 0}, {1, 1, 0}};
