#include <iostream>
#include <string>
using namespace std;

int main() {
	// vi du ve for
	for (int i = 1; i <= 10; i++) {
		cout << i << "\n";
	}
	
	// index
	//						0		1			2
	string fruits[3] = { "apple", "grapes", "lime"};
	cout << fruits[1] << "\n";
	
	// do dai array
	// size tra ve bit (1 byte = 8 bit)
	cout << sizeof(fruits) / sizeof(fruits[0]) << "\n";
	
	// Cach 1:
	for (int i = 0; i < sizeof(fruits) / sizeof(fruits[0]); i++) {
		cout << fruits[i] << "\n";
	}
	
	// Cach 2
//	for (string fruit : fruits) {
//		cout << fruit << "\n";
//	}
}
