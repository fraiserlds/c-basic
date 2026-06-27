#include <stdio.h>

void chanle(int n) {
	if (n % 2 == 0) {
		printf("%d la so chan\n", n);
	} else {
		printf("%d la so le\n", n);
	}
}

void lietke(int a) {
	for (int i = 1; i <= a; i++) {
		if (i % 2 != 0) {
			printf("%d\n", i);
		}
	}
}

void tong(int b) {
	int sum = 0;
	for (int j = 1; j <= b; j++) {
		sum += j;
	}
	printf("Tong la %d\n", sum);
}

int main() {
  // input
	int number;
	printf("Enter number:\n");
	scanf("%d", &number); // input number
	printf("Number is %d\n", number);
	
	chanle(number);
	
	lietke(20);
	
	tong(10);
}
