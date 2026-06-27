#include <iostream>
using namespace std;

// Loai 1: function khong co tham so
void helloWorld() {
	cout << "Hello World\n";
}

// Loai 2: function co tham so
void say(string name = "anonymous") {
	cout << "My name is " << name << "\n";
}

// Loai 3: function khong co tham so, su dung return
string getName() {
	return "Bean Bel";
}

// Loai 4: function co tham so, su dung return
int sum(int a, int b) {
	return a + b;
}

void myFunction(string fruits[3], int size) {
	for(int i = 0; i < size; i++) {
		cout << fruits[i] << "\n";
	}
}

int main() {
	helloWorld();
	say("Lam");
	string name = getName();	
	cout << name << "\n";
	cout << getName << "\n";
	cout << sum(13, 7) << "\n";
	
	string fruits[3] = {"apple", "banana", "grapes"};
	int size = sizeof(fruits) / sizeof(fruits[0]);
	myFunction(fruits, size);
} 
