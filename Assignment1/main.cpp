//Lichkovaha Daniil
//st129351@student.spbu.ru
//Assignment1

#include <iostream>	// Данные 2 include не нужны, т.к. они есть при подключении hello.h
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

