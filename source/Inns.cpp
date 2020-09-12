#include "Inns.h"
#include <iostream>

Inns::Inns(Team *t1, Team* t2)
    : score(0),total_ov_bowled(0)
    {
        team1 = t1;
        team2 = t2;
        t1->start_batting();
        std:: cout << "new inns started\n";
    }

void Inns::sim_inns(){
    if(total_ov_bowled < 1){
        // Over *over = new Over(team1->getBowler(),team2->getBatsman(),team1,team2);
        // over->sim_over();
        // delete over;
        std::cout<<"simulating inns\n";
        while (total_ov_bowled < 10){
            // std::cout<<"checkpoint\n:";
            action(team1->getBowler(),team2->getBatsman());
            // std::cout<<"returned from action\n";
            total_ov_bowled++;
        }
    }
}
void Inns::print_score_card(){
    std::cout << "total overs bowled: " << total_ov_bowled << "\n";
    std::cout << "score: " << score << "\n";

}
void Inns::update_score(int sc){
    score += sc;
}
void Inns::action(Player *blr, Player *bmn){
    blr->Print();
    blr->last_over_bowled = true;
    while(current_ov_ball_count < 6){
        // std::cout<<"in while\n";
        bool valid_bowl = blr->sim_bowl();
        // std::cout<<"valid bowl: " << valid_bowl;
        if (valid_bowl == true){
            int sc  = team1->sim_score();
            update_score(sc);
            current_ov_ball_count++;
            team1->inc_score();
        }
    }
    current_ov_ball_count = 0;
}
