#include <gtest/gtest.h>
#include <vector>
#include "../src/matrix.h"
#include "../src/tiles.h"
#include "./data/test_data_matrices.hpp"

TEST(TileTest, AllTilesForL) {
    ASSERT_EQ(all_L_tiles, calculate_all_tiles(L));
}

TEST(TileTest, AllUnqiueTilesForL) {
    ASSERT_EQ(all_unique_L_tiles, calculate_all_unique_tiles(L));
}
