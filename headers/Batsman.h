# pragma once
#include "utils.h"
#include "Player.h"

class Batsman : public Player{
	private:
		int score;
		int on_strike;
		prefferred_hand pref_hand;
        int batting_skill;
        bool batter;

	public:
		int sim_score();
};
