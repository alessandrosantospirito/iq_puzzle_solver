#include "matrix.h"

class Board {
    private Matrix board;
    private int rows;
    private int cols;

    Board(Matrix board, int rows, int cols);

    boolean is_tile_placement_legal(Matrix tile);
    boolean is_board_full();
    // No tile will be placed if the placement is not legal.
    void place_tile(Matrix tile);
}