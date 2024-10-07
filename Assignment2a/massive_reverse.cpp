//Lichkovaha Daniil
//st129351@student.spbu.ru
//Assignment2a

#include "massive_reverse.h"

char* massive_reverse(char* massive, int size) {
	for (int i = 0; i < size / 2; i++) {
        char item1 = massive[i];
        char item2 = massive[size - i - 1];
        massive[i] = item2;
        massive[size - i - 1] = item1;
    }
    return massive;
    
}

