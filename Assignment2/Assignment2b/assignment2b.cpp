//Lichkovaha Daniil
//st129351@student.spbu.ru
//Assignment2b

#include "processing.h"

int main() {

    std::string stringIn;
    std::cout << "Write your expression: " << std::endl;
    std::getline(std::cin, stringIn);
    std::istringstream stringOut(stringIn); // create the flow
    // and split with ' ' the string into tokens (the parts of string)
    int strSize = stringIn.length(); // size of input string

    double* arr = new double[strSize];

    double res = processing(arr, stringOut);
    std::cout << "Your result is: " << res << std::endl;

	delete[] arr;
	return 0;
}
