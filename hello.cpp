//Lichkovaha Daniil
//st129351@student.spbu.ru
//problem_1

#include <iostream>
#include <string>
using namespace std;

string name;  // Для чего?
/* Параметр num не слишком очевиден (точнее его смысл), если не знать определения функции/
 * Я бы убрал это ветвление и оставил просто печать. World можно и main'е передать просто */
void hello(int num, string name){
	if (num == 0) {
		cout << "Hello, world!" << endl;
	}

	else {
		
		cout << "Hello, " << name << "!"<< endl;
	}

}
