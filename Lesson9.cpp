#include <iostream>
using namespace std;

int main() {
	cout << "Hello World!\n";
	cout << 10;
	// 1 line
	/* 
	  	line 1
	  	line 2
	  	...
	*/
	
	string fullName = "Ruby";
	int age = 17;
	cout << "My name is " << fullName << " and I am " << age << " years old!\n";
	
	// gia tri hang so khong thay doi duoc
	const double pi = 3.14;
	cout << pi << "\n";
	
	string name;
	cout << "Enter your name:";
	cin >> name; //input
	cout << "My name is " << name << "\n";
	
	int a = 10, b = 6, c = 3;
	cout << (a + b) << "\n";
	cout << (a - b) << "\n";
	cout << (a * b) << "\n";
	cout << (a / b) << "\n";
	cout << (a % b) << "\n";
	
	c++; // tang 1 don vi
	cout << c << "\n";
	c--; // giam 1 don vi
	cout << c << "\n";
}
