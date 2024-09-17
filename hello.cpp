//Lichkovaha Daniil
//st129351@student.spbu.ru
//task1_hello_world_2.0

#include <iostream>
#include <string>
using namespace std;

string name; 
void hello(int num, string name){
	if (num == 0) {
		cout << "Hello, world!" << endl;
	}

	else {
		
		cout << "Hello, " << name << "!"<< endl;
	}

}