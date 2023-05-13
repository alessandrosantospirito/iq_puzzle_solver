#include "test_data_board.hpp"

Matrix board_position_empty = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}};
Matrix board_position_full = {{1, 1, 1}, {1, 1, 1}, {1, 1, 1}, {1, 1, 1}};

Matrix board_position_one = {{1, 0, 0}, {1, 0, 0}, {1, 1, 1}, {0, 0, 0}};
Matrix board_position_two = {{1, 1, 1}, {1, 1, 1}, {1, 1, 1}, {0, 0, 0}};
Matrix board_position_three = {{1, 1, 1}, {1, 1, 1}, {1, 1, 1}, {1, 1, 0}};

Board board_empty = new Board(board_position_empty);
Board board_full = new Board(board_position_full);
Board board_one = new Board(board_position_one);
Board board_two = new Board(board_position_two);
Board board_three = new Board(board_position_three);