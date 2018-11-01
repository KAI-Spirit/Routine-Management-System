/*
 * Fuctions.h
 *
 *  Created on: 23 Mar 2018
 *      Author: Moses
 */

#ifndef FUCTIONS_H_
#define FUCTIONS_H_

#include<iostream>

using namespace std;

void LoginMenu(){
	cout << "Select an option \n"
			"1.Login \n"
			"2.Create a user\n"
			"3.Exit" << endl;
}

string CreateUsername(){
	string NewUsername;
	cout << "Enter a username: ";
	cin >> NewUsername;
	cout<< endl;
	return NewUsername;
}
string CreatePassword(){
	string NewPassword;
	cout << "Enter a Password: ";
	cin >> NewPassword;
	cout << endl;
	return NewPassword;
}

bool LoginCheck(string Username,string Password){

	string CheckUsername;
	string CheckPassword;
	string EnteredUsername;
	string EnteredPassword;

	bool check;
	int PasswordAttempts = 0;

	CheckUsername = Username;
	CheckPassword = Password;

	do {
		PasswordAttempts = PasswordAttempts+ 1 ;
		cout << "Enter Your Username: ";
		cin >> EnteredUsername;
		cout << "Enter Your Password: ";
		cin >> EnteredPassword;
		cout << flush;
	} while (EnteredUsername != CheckUsername && EnteredPassword != CheckPassword && PasswordAttempts < 3);

	if(PasswordAttempts == 3){
		cout << "3 failed Attempts. Account Locked!!" << endl;
		check = false;
	}
	else{
		cout << "Login Successful. Welcome!!" << endl;
		check = true;
	}
	return check;
}
#endif /* FUCTIONS_H_ */
