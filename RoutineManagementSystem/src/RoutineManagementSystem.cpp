//============================================================================
// Name        : RoutineManagementSystem.cpp
// Author      : Moses
// Copyright   : Your copyright notice
// Description : RoutineManagementSystem, Ansi-style
//============================================================================

#include "Fuctions.h"

using namespace std;

int main() {

	string Username;
	string Password;
	int input = 0;

	do{
		LoginMenu();
		cout << "Option: ";
		cin >> input;

	switch(input){
	case 1:
		LoginCheck(Username, Password);
		break;
	case 2:
		Username = CreateUsername();
		Password = CreatePassword();
		break;
	case 3:
		cout << "Quitting Program...." << endl;
		break;
	default :
		cout << "Please select an option from the menu." << endl;
	}
	} while(input != 3);

	return 0;
}
