#include <iostream>
using namespace std;

// parent class
class Animal {
	// attribute
	public:
		string name;
		int age;
		
	// constructor
	Animal(string inputName) {
		name= inputName;
	}
	
	// method
	void introduce() {
		cout << "Name: " << name << "\n";
	}
};


class Cat: public Animal {
	// ke thua constructor
	public: Cat(string inputName): Animal(inputName) {}
};

class AnotherAnimal {
	public:
		string color;
};

// child class
class Dog: public Animal, public AnotherAnimal {
	// ke thua consrtructon
public:
	Dog(string inputName): Animal(inputName) {}
};

int main() {
	string dogName, catName;
	
	cout << "Enter dog's name: ";
	cin >> dogName;
	Dog myDog(dogName);
	myDog.age = 2;
	
	cout << "Enter cat's name: ";
	cin >> catName;
	Cat myCat(catName);
	myCat.age = 4;
	
	cout << "My dog's name is " << myDog.name << " and he is " << myDog.age << " years old\n";
	cout << "My cat's name is " << myCat.name << " and she is " << myCat.age << " years old\n";
	
	myDog.introduce();
	myCat.introduce();
	
	myDog.color = "brown";
	
	cout << "My dog's color is " << myDog.color;
}
