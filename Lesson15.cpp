#include <iostream>
using namespace std;

class Animal {
	public:
		virtual void say() {
			cout << "Bla bla ... \n";
		}
};

class Dog : public Animal {
	public:
		void say() override {
			cout << "Gau gau ... \n";
		}
};

class Cat : public Animal {
	public:
		void say() override {
			cout << "Meo meo ... \n";
		}
};

class Duck : public Animal {
	public:
		void say() override {
			cout << "Quack quack ... \n";
		}
};

class Fish : public Animal {
	public:
		void say() override {
			cout << "Blob blob ... \n";
		}
};

int main() {
	Dog myDog;
	Cat myCat;
	Duck myDuck;
	Fish myFish;
	// Animal* la con tro
	// &myDog, &myCat la dia chi cua hai bien myDog, myCat
	Animal* animals[] = {&myDog, &myCat, &myDuck, %myFish};
	int animalLength = sizeof(animals) / sizeof(animals[0]);
	
	for (int i = 0; i < animalLength; i++) {
		animals[i]->say();
	}
}
