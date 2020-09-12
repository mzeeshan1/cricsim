#include "Team.h"
#include "string.h"
#include <iostream>

Team::Team(){}
Team::Team(char *name, Player *p1, Player *p2, Player *p3)
{
    
    pl1 = p1;
    pl2 = p2;
    pl3 = p3;
    
    strcpy(team_name,name);
    runs_scored = 0;
    std::cout <<"team created\n";
}

void Team::start_batting(){
    batting = true;
    std::cout << "batting1: " << batting <<"\n";

}
void Team::inc_score(){
    runs_scored++;
}
Player * Team::getBowler(){

    std::cout<<"getting bowler "<< std::endl;
    int slot = empty_slot_exists();
    if (slot != -1){
        Player *p = get_hsp_nir();
        arr[slot] = p;
        remove_lob();
        return p;
    }
    else{
        Player *p = get_hsp_arr();
        remove_lob();    
        return p;
    }
}
Player * Team::getBatsman(){
    return batsman1;
}
int Team::empty_slot_exists(){
    for (int i = 0; i<2;i++){
        if(arr[i] == NULL){
            return i;
        }
    }
    return -1;
}
void Team::remove_lob(){
    for (int i=0; i<2; i++){
        if (arr[i] != 0){
            arr[i]->last_over_bowled = false;
        }
    }
}
Player * Team::get_hsp_arr(){
    for (int i=0; i<2; i++){
        if (arr[i]->last_over_bowled == false){
            return arr[i];
        }
    }
}
Player * Team::get_hsp_nir(){
    for (int i=0; i<2; i++){
        if (arr[i] != NULL){
            // if (arr[i] != pl1 && arr[i]!= pl2 && arr[i] != pl3){
            if (pl1 != arr[i] && pl2 != arr[i] && pl3 != arr[i]){
                return pl1;
            } 
            if (pl2 != arr[i] && pl3 != arr[i]){
                return pl2;
            }
            return pl3;
        }
        return pl1;
    }
}