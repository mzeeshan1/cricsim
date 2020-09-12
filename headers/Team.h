# pragma once
#include "Bowler.h"
#include "Batsman.h"
#include <queue> 

class Team : public Bowler, public Batsman, public Player{
	private:
		char team_name[NAME_LEN];
		// Player ** p_list;
        Player *pl1;
        Player *pl2;
        Player *pl3;
        Player *arr[2];
        // queue <player *> q;
		// Bowler * bowler1;
		// Bowler * bowler2;
		Batsman * batsman1;
		Batsman * batsman2;

		bool batting;
		int runs_scored;
		// Player *pl_list;
	public:
		Team();
		Team(char *name, Player *p1, Player *p2, Player *p3);
			
		// void initialize_player_list(Bowler bl1,Bowler bl2, Batsman bt1, Batsman bt2){
			
		// 	// p_list = (Player **)malloc(sizeof(Bowler)*5);
		// 	// Bowler *b1 = new Bowler(skill 5);
		// 	// Batsman *b2 = new Batsman("Shoaib","Malik",5);
		// 	// p_list[0] = p1;
		// 	// p_list[1] = p2;
		// 	// p_list[1] = p2;
		// }
		// void print_team(){
			// Player *p1 = p_list[0];
			// p1->Print();
			// std::cout << "batting: " << batting << "\n";
		// }
		void start_batting();
		void inc_score();
		Player * getBowler();
		Player * getBatsman();
        int empty_slot_exists();
        void remove_lob();
        Player *get_hsp_arr();
        Player *get_hsp_nir();
};
