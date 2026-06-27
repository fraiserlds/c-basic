#include <iostream>
using namespace std;

// vi?t 1 class hcn có cd và cr dc nh?p t? bàn phím. hãy vi?t method tính cv và dt hcn dó

class hcn {
	public:
		int d;
		int r;
		
	// constructor
	hcn(int inputd, int inputr) {
		d = inputd;
		r = inputr;
	}
	
	void tinh() {
		int cv = (d + r) * 2;
		int dt = d * r;
		cout << "chu vi la " << cv << ", dien tich la " << dt << "\n";
	}
};

int main() {
	
	
	int inputdai;
	cout << "chieu dai: ";
	cin >> inputdai;
	
	int inputrong;
	cout << "chieu rong: ";
	cin >> inputrong;

	hcn hcn1(inputdai, inputrong);
	
	hcn1.tinh();
}
