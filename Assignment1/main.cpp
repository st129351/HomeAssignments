//Lichkovaha Daniil
//st129351@student.spbu.ru
//problem_1

#include <iostream>
#include <string>
#include "hello.h"


std::string name;

int main() {
	std::cout << "Hello, world!" << std::endl;
	while(true) {
		std::cout << "write your name, pls (write 0 for exit): ";
		std::cin >> name;
		if (name != "0"){
			hello(name);
		}
		else {
			break;
		}
	}
	return 0;
}

