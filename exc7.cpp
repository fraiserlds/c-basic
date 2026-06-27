#include <stdio.h>

int luythua(int m, int n) {
	if (n > 0) {
	return m * luythua(m, n-1);
} else {
	return 1;
}
}
	
int main() {
	
	// input
	int a;
	printf("Enter a:");
	scanf("%d", &a); // input number
	
	int b;
	printf("Enter b:");
	scanf("%d", &b);
	
	int result = luythua(a, b);
	printf("%d", result);
	return 0;
}
	

