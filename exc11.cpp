#include <iostream>
using namespace std;

int main() {
	// 1. Hãy in ra s? l? t? 1 d?n 10
	for (int i = 0; i <= 10; i++) {
		if (i % 2 ==! 0) {
			cout << i << "\n";
		}
	}
	
	
//	// 2. Hãy tính t?ng các s? ch?n t? 1 d?n n bi?t n du?c nh?p t? bàn phím
	int sum = 0;
	int a;
	cout << "Enter a: ";
	cin >> a;
	
	for (int i = 0; i <= a ; i++) {
		if (i % 2 == 0) {
			sum += i;
		}
	}
	cout << "tong cac so chan tu 1 den " << a << " la " << sum << "\n";
	
//	// 3. Hãy li?t kê các u?c s? c?a n bi?t n nh?p t? bàn phím
	int n;
	cout << "Enter n: ";
	cin >> n;
	
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			cout << i << "\n";
		}
	}
	
//	// 4. Hãy tính giai th?a c?a 1 s? n du?c nh?p t? bàn phím
	int giaithua = 1;
	int b;
	cout << "Enter b: ";
	cin >> b;
	
	if (b > 0) {
		for (int i = 1; i <= b; i++) {
			giaithua *= i;
		}
		
		cout << giaithua << "\n";
	} else if (b == 0) {
		cout << 1 << "\n";
	} else {
		cout << "b > 0 !\n";
	}
	
	// 5. cho 1 m?ng 2,5,3,8,9,12. Hãy tìm s? l?n nh?t ? m?ng trên
	int num[6] = {2, 5, 3, 8, 9, 12};
	int max = num[0];
	
	for (int i = 0; i < sizeof(num) / sizeof(num[0]); i++) {
		if (num[i] > max) {
			max = num[i];
		}
	}
	
	cout << max;

	
}
