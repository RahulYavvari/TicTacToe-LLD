#pragma once

#include <vector>
#include "User.h"
#include "Move.h"

#define BOARD_SIZE 3

class Board
{
public:
	int board_size;
	std::vector<std::vector<int>> board;

	Board();

	void initialize();

	std::vector<std::vector<int>> get_board() const;

	void make_move(Move current_move);
};