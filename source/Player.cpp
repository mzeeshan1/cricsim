#include <iostream>
#include "Player.h"
#include "utils.h"
#include <string.h>		

Player::Player(){}

Player::Player(char *fname, char *lname, int p_num, prefferred_hand p_hand, int bsk, int blsk){
    strcpy(firstname,fname);
    strcpy(lastname,lname);
    player_num = p_num;
    pref_hand = p_hand;
    batting_skill = bsk;
    bowling_skill = blsk;

}	
bool Player::make_captain(){
    captain = true;
    return true;
}	
void Player::Print(){
    std::cout << "Firstname: " << firstname << "\n";
    // std::cout << "Lastname: " << lastname<< "\n";
    // std::cout << "Jersey Number: " << player_num << "\n";
    // std::cout << "Captain: " << captain << "\n";
}	
void Player::make_keeper(){
    wicket_keeper = true;
}
bool Player::sim_bowl(){
	return true;
}