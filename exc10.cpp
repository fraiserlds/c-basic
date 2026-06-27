#include <iostream>
using namespace std;

int main() {
//	int a;
//	cout << "Enter a: ";
//	cin >> a;
//	
//	string result = (a % 2 == 0) ? " la so chan" : " la so le";
//	
//	cout << a << result;

	// cho 3 so a, b, c khac nhau, kiem tra so lon nhat
//	int a, b, c;
//	cout << "Enter a: ";
//	cin >> a;
//	cout << "Enter b: ";
//	cin >> b;
//	cout << "Enter c: ";
//	cin >> c;
//	
//	int max;
//	if (b > a) {
//		max = b;
//	} else {
//		max = a;
//	}
//	
//	if (c > max) {
//		max = c;
//	}
//	
//	cout << "so lon nhat la " << max;


	// cho 3 diem mon toan, van, anh biet toan va van he so 2
	// tinh diem trung binh va xep loai hoc luc biet
	// >= 8 : gioi, >= 6.5 : kha, >= 5 : trung binh, < 5 : yeu
	
//	float t, v, a;
//	cout << "Enter t: ";
//	cin >> t;
//	cout << "Enter v: ";
//	cin >> v;
//	cout << "Enter a: ";
//	cin >> a;
//	
//	float dtb = (t * 2 + v * 2 + a) / 5;
//	
//	string hocluc;
//	
//	if (dtb >= 8) {
//		hocluc = "gioi";
//	} else if (dtb >= 6.5) {
//		hocluc = "kha";
//	} else if (dtb >= 5) {
//		hocluc = "trung binh";
//	} else {
//		hocluc = "yeu";
//	}
//	
//	cout << "dtb: " << dtb << ", hoc luc: " << hocluc;

	// in ra cac so tu 1 den 10 thu tu giam dan
//	int i = 10;
//	while (i > 0) {
//		cout << i << "\n";
//		i --;
//	}

	// liet ke cac so tu 1 den 20 ko dung if
//	int i = 2;
//	while (i <= 20) {
//		cout << i << "\n";
//		i += 2;
//	}

	// hãy tính t?ng các s? t? 1 d?n n v?i n nh?p t? bàn phím
	
//	int tong = 0;
//	int n;
//	cout << "Enter n: ";
//	cin >> n;
//	
//	int i = 1;
//	while (i <=  n) {
//		tong += i;
//		i++;
//	}
//	
//	cout << "tong cac so tu 1 den " << n << " la " << tong;

	// Hãy in ra các u?c s? c?a 1 s? n nh?p t? bàn phím
	
	int n;
	cout << "Enter n: ";
	cin >> n;
	
	int i = 1;
	while (i <= n) {
		if (n % i == 0) {
			cout << i << "\n";
		}
		
		i++;
	}
}
