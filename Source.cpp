#include <iostream>
#include <stdlib.h>
#include "Monster.h"
#include "Player.h"

using namespace std;
int selection;

int main(){
	cout << "Logan Smith 1st Hour" << endl;
	bool run = true;
	Monster m;
	Player p;
	do{
		cout << "**************************************" << endl;
		cout << "* 1) Maze Game                       *" << endl;
		cout << "* 2) Fight a Monster                 *" << endl;
		cout << "* 3) Maze Game and Fight Monsters    *" << endl;
		cout << "* 4) Stuff                           *" << endl;
		cout << "* 5) Exit                            *" << endl;
		cout << "**************************************" << endl;
		cin >> selection;
		switch (selection){
		case 1:
			cout << "You have choosen to walk the maze." << endl;
		case 2:
			cout << "You have choosen to fight." << endl;
			while (m.getHealth() > 0 && p.getHealth() > 0) {
				if (p.hitBy(&m)) {
					cout << "Player was hit by the monster for " << m.attack(&p) << endl;
				}
				else {
					cout << "Monster missed" << endl;
				}

				if (m.hitBy(&p)) {
					cout << "Monster was hit by the player for " << p.attack(&m) << endl;
				}
				else {
					cout << "Player missed" << endl;
				}
			}

			if (p.getHealth() <= 0) {
				cout << "Monster won" << endl;
			}
			else {
				cout << "Player won" << endl;
			}
			continue;
		case 3:
			cout << "You have choosen to run the maze while fighting monsters." << endl;
		case 4:
			cout << "Here are some photos for you to not enjoy." << endl;
			cout << "***********************************************************" << endl;
			cout << "*                             #                           *" << endl;
			cout << "*                            ###                          *" << endl;
			cout << "*                           #####                         *" << endl;
			cout << "*                          #######                        *" << endl;
			cout << "*                         #########                       *" << endl;
			cout << "*                        ###########                      *" << endl;
			cout << "*                       #############                     *" << endl;
			cout << "*                      ###############                    *" << endl;
			cout << "*                     #################                   *" << endl;
			cout << "*                    ###################                  *" << endl;
			cout << "*                   ILLUMINATI  CONFIRMED                 *" << endl;
			cout << "***********************************************************" << endl;
			continue;
 		case 5:
			cout << "You are Exiting the game." << endl;
			run = false;
			break;
		default:
			cout << "The number you selected is not here. Please try again." << endl;
		}
	} while (run);
	system("pause");
	return 0;
}