#pragma once

#include "UserStats.h"
#include "GameStatus.h"
#include "GenerateIdentifier.h"

class User
{
public:
	int user_id;
	UserStats stats;

	User();

	void update_stats(GameStatus::Outcome game_status);
};