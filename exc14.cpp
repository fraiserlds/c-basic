#include <iostream>
using namespace std;

// Cho 1 parent class là Geometry có 2 attribute là chi?u dài, chi?u r?ng.
// 2 class con là Rectangle và Square k? th?a class Geometry. 
//Hãy vi?t 2 method tính chu vi, di?n tích tuong ?ng v?i 2 class con trên

// parent class
class Geometry {
	// attribute
	public:
		int d;
		int r;
		
	// constructor
	Geometry(int cd, int cr) {
		d = cd;
		r = cr;
	}
	
	// method
	void tinh() {
		int cv = (d + r) * 2;
		int dt = d * r;
		cout << "chu vi la " << cv << ", dien tich la " << dt << "\n";
	}
};

class Rec: public Geometry {
	// ke thua constructor
	public: Rec(int cd, int cr): Geometry(cd, cr) {}
};

class Squ: public Geometry {
	// ke thua constructor
	public: Squ(int cd, int cr): Geometry(cd, cr) {}
};

int main() {
	
	int cd;
	cout << "chieu dai: ";
	cin >> cd;
	
	int cr;
	cout << "chieu rong: ";
	cin >> cr;

	if (cr == cd) {
		Squ Squ1(cr, cd);
		Squ1.tinh();
	} else {
		Rec Rec1(cr, cd);
		Rec1.tinh();
	}
}
