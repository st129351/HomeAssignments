#include <iostream>
#include <string>
#include "header.h"
using namespace std;

extern string name;

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

