#include <stdio.h>
//// 1. tính giai th?a c?a 1 s? n du?c nh?p t? bàn phím
//	int gt(int k);
//	
//int main() {
//	
//	// input
//	int number;
//	printf("Enter number:\n");
//	scanf("%d", &number); // input number
//	
//	int result = gt(number);
//	printf("%d", result);
//	return 1;
//}
//	
//int gt(int k) {
//	if (k > 1) {
//	return k * gt(k - 1);
//} else {
//	return 1;
//}
//}

// 2. in ra dãy so fibonacci dua vào so n, n la so phan tu
//
//int fib(int i) {
//	if (i <= 1) {
//		return i;
//	}
//	return fib(i - 1) + fib(i - 2);
//}
//
//int main() {
//	int n;
//	printf("Enter n:");
//	scanf("%d", &n);
//	
//	printf("fibonacci:");
//	for (int i =  0; i < n; i++) {
//		printf("%d", fib(i));
//	}
//}

//3. tính luy th?a a mu b b?ng d? quy bi?t a,b là 2 s? nh?p t? bàn phím
	
int luythua(int a, int b);
	
int main() {
	
	// input
	int a;
	printf("Enter a (a^b):\n");
	scanf("%d", &a); // input number
	
	int b;
	printf("Enter b (a^b):\n");
	scanf("%d", &a);
	
	int result = luythua(a, b);
	printf("%d", result);
	return 0;
}
	
int luythua(int a, int b) {
	if (b > 0) {
	return a * luythua(a, b-1);
} else {
	return 1;
}
}
	
