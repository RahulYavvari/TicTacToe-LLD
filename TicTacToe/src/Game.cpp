#include "Game.h"

Game::Game()
{
	GenerateIdentifier gen_iden;
	int identifier = gen_iden.get_identifier(GenerateIdentifier::lower_bound, GenerateIdentifier::upper_bound);
	game_id = identifier;
}

void Game::initialize()
{
	users.push_back(new User());
	users.push_back(new User());
}

void Game::undo()
{

}

void Game::get_current_player()
{

}

void Game::get_winner()
{

}

Game::~Game()
{
	delete winner;
	for (auto user : users)
	{
		delete user;
	}
}