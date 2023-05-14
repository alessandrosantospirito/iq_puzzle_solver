#include <gtest/gtest.h>
#include <vector>
#include "../src/matrix.h"
#include "../src/board.h"
#include "./data/test_data_board.hpp"

Board board_empty = Board(board_position_empty);
Board board_full = Board(board_position_full);
Board board_one = Board(board_position_one);
Board board_two = Board(board_position_two);
Board board_three = Board(board_position_three);

TEST(BoardTest, BoardEmptyMustBeEmpty) {
    ASSERT_EQ(board_position_empty, board_empty.get_position());
};

TEST(BoardTest, BoardFullMustBeFull) {
    ASSERT_EQ(board_position_full, board_full.get_position());
};

TEST(BoardTest, BoardOneMustHavePositionOne) {
    ASSERT_EQ(board_position_one, board_one.get_position());
};

TEST(BoardTest, BoardTwoMustHavePositionOne) {
    ASSERT_EQ(board_position_two, board_two.get_position());
};

TEST(BoardTest, BoardThreeMustHavePositionOne) {
    ASSERT_EQ(board_position_three, board_three.get_position());
};
