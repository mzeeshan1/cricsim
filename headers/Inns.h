# pragma once
#include "Batsman.h"
#include "Bowler.h"
#include "Team.h"

class Inns : public Batsman, public Bowler, public Team {
	private:
		int score;
		int current_ov_ball_count = 0;
		int total_ov_bowled;
		enum runs_scored {zero,one,two,three,four,six};
		Team *team1;
		Team *team2;
	public:
		Inns(Team *t1, Team* t2);
		void sim_inns();
		void print_score_card();
		void update_score(int sc);
		void action(Player *blr, Player *bmn);
};
