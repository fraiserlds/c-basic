#include <iostream>
using namespace std;

int main() {
	int a, b;
	cout << "Enter a: ";
	cin >> a;
	cout << "Enter b: ";
	cin >> b;
	
	if (a > b) {
		cout << "a > b\n";
	} else if (a == b) {
		cout << "a = b\n";
	} else {
		cout << "a < b\n";
	}
	
	// toan tu ba ngoi
	string result = (a > b) ? "a > b" : ((a < b) ? "a < b" : "a = b");
	cout << result << "\n";
	
	// vong lap
	cout << "vi du ve while:\n";
	int i = 1;
	while (i <= 10) {
		cout << i << "\n";
		i++;
	}
	
	cout << "vi du ve break:\n";
	int j = 1;
	while (j <= 10) {
		if (j == 3) {
			break; // thoat khoi vong lap
		}
		cout << j << "\n";
		j++;
	}
	
	cout << "vi du ve continue:\n";
	int k = 0;
	while (k < 10) {
		k++;
		if (k == 3) {
			continue; // skip vong lap hien tai
		}
		cout << k << "\n";
	}
}
