
#include "User.h"

User::User()
{
	GenerateIdentifier gen_iden;
	int identifier = gen_iden.get_identifier(GenerateIdentifier::lower_bound, GenerateIdentifier::upper_bound);
	user_id = identifier;
}

void User::update_stats(GameStatus::Outcome game_status)
{
	switch (game_status)
	{
	case GameStatus::Outcome::WIN: stats.win_count = stats.win_count + 1;
		break;
	case GameStatus::Outcome::LOSE: stats.lose_count = stats.lose_count + 1;
		break;
	case GameStatus::Outcome::DRAW:
		break;
	case GameStatus::Outcome::UNDECIDED:
		break;
	default:
		break;
	}
}
