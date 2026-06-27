#include <iostream>
using namespace std;

// Vi?t cho thày 1 function nh?p s? n t? bàn phím, ki?m tra s? dó là s? ch?n hay s? l?

void chanle(int n) {
	if (n % 2 == 0) {
		cout << n << " la so chan\n"; 
	} else  {
		cout << n << "la so le\n";
	}
}

// Vi?t 1 function tính t?ng nhu sau 1 + 1/3 + 1/5 + … + 1/(2n + 1)
void tong(int k) {
	float sum = 0;
	for(int i = 0; i <= k; i++) {
		sum += 1.0 /(2*i + 1);
	}	
	cout << "tong la " << sum << "\n";
}

// Cho 1 dãy s? 1,5,2,-3,-9,6. Hãy vi?t 1 function tìm s? l?n nh?t và nh? nh?t
void max(int num[6], int size) {
	int max = num[0];
	for(int i = 1; i < size; i++) {
		if (num[i] > max) {
			max = num[i];
		}
	}
	cout << max << " la so lon nhat\n";
}

// Cho 1 dãy s? 1,5,2,-3,-9,6. Hãy vi?t 1 function tìm s? l?n nh?t và nh? nh?t
void min(int num[6], int size) {
	int min = num[0];
	for(int i = 1; i < size; i++) {
		if (num[i] < min) {
			min = num[i];
		}
	}
	cout << min << " la so be nhat\n";
}

int main() {
	int n;
	cout << "enter n: ";
	cin >> n;
	chanle(n);
	
	int k;
	cout << "enter k: ";
	cin >> k;
	tong(k);
	
	int num[6] = {1,5,2,-3,-9,6};
	int size = sizeof(num) / sizeof(num[0]);
	max(num, size);
	min(num, size);
}
