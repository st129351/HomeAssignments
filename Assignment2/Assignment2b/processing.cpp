//Lichkovaha Daniil
//st129351@student.spbu.ru
//Assignment2b

#include "processing.h"

double processing(double* list, std::istringstream& newString) {
	std::string oper = "+-*/"; // operation
	int top = -1; // variable to work with stack
    std::string number;
    std::string currItem;
    while (newString >> currItem) {

    	if (oper.find(currItem) == std::string::npos) { 
    		// string::npos, when the item is absent
    		double num = std::stod(currItem); // transform string type to double
    		top += 1;
            list[top] = num;
            
    	}

    	else {

    		double result;

    		if (currItem == "+") { // "+", not '+', currItem is string
    			result = list[top - 1] + list[top];

    			list[top] = 0.0; // clear this item
    			top -= 1; // go back one item, because work with stack (LIFO)
    			list[top] = result; // return top to index back
    			
    		}

    		if (currItem == "*") {
    			result = list[top - 1] * list[top];

    			list[top] == 0.0;
    			top -= 1;
    			list[top] = result;
    		}

    		if (currItem == "-") {
    			result = list[top - 1] - list[top];

    			list[top] == 0.0;
    			top -= 1;
    			list[top] = result;
    		}

    		if (currItem == "/") {
    			result = list[top - 1] / list[top];

    			list[top] == 0.0;
    			top -= 1;
    			list[top] = result;
    		}
    	} 
    }

	return list[top];
}