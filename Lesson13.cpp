#include <iostream>
using namespace std;

class dog {
	// attribute
	public:
		string name;
		int age;
		
	void bark() {
		cout << "gau gau\n";
	}
	
	void welcome(string name) {
		cout << "gau gau " << name << "\n";
	}
};

class cat {
	public:
		string name;
		
	// constructor
	cat(string inputName) {
		name = inputName;
	}
};

int main() {
	// create object
	dog mydog;
	
	mydog.name = "u nu";
	mydog.age = 2;
	
	cout << "my dog's name is " << mydog.name << " and she is " << mydog.age << " years old.\n";
	
	dog herdog;
	
	herdog.name = "um";
	herdog.age = 3;
	
	cout << "her dog's name is " << herdog.name << " and she is " << herdog.age << " years old.\n";
	
	mydog.bark();
	herdog.bark();
	
	mydog.welcome("bi");
	
	string inputCat;
	cout << "enter your cat's name: ";
	cin >> inputCat;
	cat yourcat(inputCat);
	
	cout << "your cat's name is " << yourcat.name << "\n";
	
	
	
	
	
	
	
}
