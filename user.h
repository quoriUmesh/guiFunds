#pragma once
#include<iostream>
#include<string>

using namespace std;
class User
{
protected:
	std::string username, password;
	int wallet_id, mpin;

public:
	User();
	User(string username, string password, int wallet_id );
	string getUsername();
	string gatPassword();
	int getWallet_id();
	void setUsername(string username);
	void setPassword(string password);
	void setWallet_id(int wallet_id);
	void setMpin(int mpin);
	};

