# pragma once
# include "Player.h"

class Bowler : public Player{
	private:
		int overs_bowled;
		int wickets_taken;
		int runs_conceded;
        
	public:
        Bowler();
        Bowler(int);
		// 
};
