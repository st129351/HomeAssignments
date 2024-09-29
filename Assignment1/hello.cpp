//Lichkovaha Daniil
//st129351@student.spbu.ru
//Assignment1

#include <iostream>	// Т.к. в hello.h уже есть include для iostream и string, то можно заменить include
#include <string>	// в этой файле просто подключив заголовочный hello.h


std::string name1;	// Данная переменная не нужна. При обращении к функции hello нужная строка 
			// скопируется из передаваемого функции аргумента
void hello(std::string name1){
	std::cout << "Hello, " << name1 << "!"<< std::endl;
}
