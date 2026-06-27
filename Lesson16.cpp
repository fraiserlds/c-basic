#include <iostream>
#include <fstream>
using namespace std;

class People {
	private:
		string name;
		
	public:
		void setName(string inputName) {
			name = inputName;
		}
		
		void introduce() {
			cout << "My name is " << name << "\n";
		}
		
	friend void hello(People people);
};

void hello(People people) {
	cout << "Hello, my name is " << people.name << "\n";
}

int main() {
//	People people;
//	people.setName("Lam");
//	people.introduce();
//	hello(people);

// Tao file
	ofstream MyFile("myfile.txt");
	
// Viet file
	MyFile << "Hello World\n";
	MyFile << "Hello Teacher";
	
// Dong file
	MyFile.close();
	
// Doc file
	string myText;
	
	ifstream MyReadFile("myfile.txt");
	
	while (getline (MyReadFile, myText)) {
		cout << myText << endl;
	}
	
// Dong file
	MyReadFile.close();
}
