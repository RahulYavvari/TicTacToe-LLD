#include "Board.h"

Board::Board() : board_size(BOARD_SIZE), board(BOARD_SIZE, std::vector<int>(BOARD_SIZE)) {}

void Board::initialize()
{
	board.assign(BOARD_SIZE, std::vector<int>(BOARD_SIZE, -1));
}

std::vector<std::vector<int>> Board::get_board() const
{
	return board;
}

void Board::make_move(Move current_move)
{
	
}
