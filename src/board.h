#include "matrix.h"

class Board {
    private:
        Matrix board;

    public:
        Board(Matrix board);

        bool is_tile_placement_legal(Matrix tile);
        bool is_board_full();
        // No tile will be placed if the placement is not legal.
        void place_tile(Matrix tile);
        Matrix get_board();
        int get_rows();
        int get_cols();
}