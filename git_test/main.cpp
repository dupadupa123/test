/*
 * main.cpp
 *
 *  Created on: Apr 14, 2016
 *      Author: robert
 */

#include <iostream>
#include <string>

using namespace std;

class Print {
	string _m_string;
public:
	Print(string str): _m_string(str) {}
	~Print() {
		cout << "END" << endl;
	}
	void operator()() {
		cout << "PRINT: " << _m_string << endl;
	}
};

int main(int argc, char** argv) {
	Print a("HELLO");
	a();
	a();
	return 0;
}


