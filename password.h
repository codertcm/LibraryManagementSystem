#pragma once
#include <bits/stdc++.h>

#include "encryptor.h"
#include "database.h"

using namespace std;

class Password{
	static Encryptor* encryptor;
	string ciphertext;
public:
	Password();
	Password(const string&);
	friend istream& operator >>(istream&,Password&);
	friend ostream& operator <<(istream&,const Password&);
	friend Database;
};