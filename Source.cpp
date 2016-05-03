#include <iostream>
#include <stdlib.h>

using namespace std;
int selection;

int main(){
	cout << "Logan Smith 1st Hour" << endl;
	bool run = true;
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
		case 3:
			cout << "You have choosen to run the maze while fighting monsters." << endl;
		case 4:
			cout << "Here are some photos for you to not enjoy." << endl;
			cout << "***********************************************************" << endl;
			cout << "*                                                         *" << endl;
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
			cout << "*                                                         *" << endl;
			cout << "***********************************************************" << endl;
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