#include "tiles.h"

std::vector<Matrix> calculate_all_tiles(Matrix tile) {
    Matrix tile_rotated_once =  rotate_matrix_clockwise(tile);
    Matrix tile_rotated_twice = rotate_matrix_clockwise(tile_rotated_once);
    Matrix tile_rotated_thrice = rotate_matrix_clockwise(tile_rotated_twice);

    Matrix tile_flipped_once = flip_matrix_vertical(tile);
    Matrix tile_rotated_once_flipped = flip_matrix_vertical(tile_rotated_once);
    Matrix tile_rotated_twice_flipped = flip_matrix_vertical(tile_rotated_twice);
    Matrix tile_rotated_thrice_flipped = flip_matrix_vertical(tile_rotated_thrice);

    return {
        tile, tile_rotated_once, tile_rotated_twice, tile_rotated_thrice,
        tile_flipped_once, tile_rotated_once_flipped, tile_rotated_twice_flipped, tile_rotated_thrice_flipped
    };
}