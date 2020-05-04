#include <iostream>
#include <string.h>
#include <stdio.h>
const int NAME_LEN = 100;

enum prefferred_hand{
	left,right
};

class Player{
	private:
		char firstname[NAME_LEN];
		char lastname[NAME_LEN];
		int player_num;
		prefferred_hand pref_hand;
                int batting;
                int bowling;
		
	public:
		Player(){

		}
		/*
		Player(char *fname,char *lname,int p_num){
			strcpy(firstname,fname);
			strcpy(lastname,lname);
			player_num = p_num;
		}
		*/
		Player(char *fname,char *lname, int p_num, prefferred_hand p_hand, int bat, int bowl)
                {
			strcpy(firstname,fname);
                        strcpy(lastname,lname);
                        player_num = p_num;
                        pref_hand = p_hand;
                        batting = bat;
                        bowling = bowl;
                }
	
		void Print(){
			std::cout << "Firstname: " << firstname << "\n";
			std::cout << "Lastname: " << lastname<< "\n";
			std::cout << "Jersey Number: " << player_num << "\n";
			std::cout << "Batting: " << batting << "\n";
                        std::cout << "Bowling: " << bowling << "\n";
			std::cout << "Dominant Hand: " << pref_hand << "\n";

			
		}
		
};
/*
class Bowler {
	
};

class PlayerStats : public Player {
	private: 
		prefferred_hand pref_hand = right;
		int batting;
		int bowling;
	public:
		PlayerStats(prefferred_hand p_hand,int bat, int bowl)
		{	
			pref_hand = p_hand;
			batting = bat;
			bowling = bowl;
		}
		PlayerStats(char *fname,char *lname, int num, prefferred_hand p_hand, int bat, int bowl):Player{fname,lname,num}
		{
			pref_hand = p_hand;
			batting = bat;
			bowling = bowl;
		}
		void Print(){
			Player :: Print();
			std::cout << "Batting: " << batting << "\n";
                        std::cout << "Bowling: " << bowling << "\n";
		}

		  
};
*/

class Team : public Player {
	public:
	

};

int main(){
	
	Player P1("Shahid","Afridi",5,right,30,65);
	P1.Print();
	return 0;
}
