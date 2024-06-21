#pragma once

#include <vector>
#include "User.h"
#include "Move.h"
#include "GenerateIdentifier.h"

class Game
{
private:
	User* winner;
	std::vector<User*> users;

public:
	int game_id;

	std::vector<Move> moves_history;

	Game();

	void initialize();

	void undo();

	void get_current_player();

	void get_winner();

	~Game();
};

