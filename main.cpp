//Lichkovaha Daniil
//st129351@student.spbu.ru
//problem_1

#include <iostream>
#include <string>
#include "header.h"
using namespace std;

extern string name; // Зачем его делать глобальным? 

int main() {
	int a = 0;
	hello(a, name);
	while(true) {
		cout << "write your name, pls (write 0 for exit): ";
		cin >> name;
		if (name != "0"){
			a += 1;
			hello(a, name);
		}
		else {
			break;
		}
	}
	return 0;
}

