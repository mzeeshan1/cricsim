#pragma once
#include "utils.h"

class Player{
	private:
		char firstname[NAME_LEN];
		char lastname[NAME_LEN];
		int player_num;
		bool wicket_keeper;
		bool captain;
		prefferred_hand pref_hand;
		int bowling_skill;
		int batting_skill;
		int overs_bowled;
		int wickets_taken;
		int runs_conceded;

	public:
		bool last_over_bowled;
		Player();
		Player(char *fname, char *lname, int p_num, prefferred_hand p_hand, int blsk, int btsk);
		bool make_captain();
		void make_keeper();
	    void Print();
		bool sim_bowl();
};			