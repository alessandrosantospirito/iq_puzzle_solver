#include <gtest/gtest.h>
#include <vector>
#include "../src/matrix.h"
#include "../src/tiles.h"
#include "./data/test_data_matrices.hpp"

std::vector<Matrix> all_L_tiles = {
    L, L_rotated, L_rotated_twice, L_rotated_thrice,
    L_flipped, L_rotated_flipped, L_rotated_twice_flipped, L_rotated_thrice_flipped
};

TEST(TileTest, AllTilesForL) {
    ASSERT_EQ(all_L_tiles, calculate_all_tiles(L));
}