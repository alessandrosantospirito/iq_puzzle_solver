#include "../src/matrix.h"
#include "test_data_board.hpp"

Matrix board_position_empty = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}};
Matrix board_position_full = {{1, 1, 1}, {1, 1, 1}, {1, 1, 1}, {1, 1, 1}};

Matrix board_position_one = {{1, 0, 0}, {1, 0, 0}, {1, 1, 1}, {0, 0, 0}};
Matrix board_position_two = {{1, 1, 1}, {1, 1, 1}, {1, 1, 1}, {0, 0, 0}};
Matrix board_position_three = {{1, 1, 1}, {1, 1, 1}, {1, 1, 1}, {1, 1, 0}};
