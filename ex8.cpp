// tao 1 file ex8.cpp. cho 1 con so bat ki trong file ex8.txt . hay viet chuong trinh de kiem tra so ben trong file la so chan hay le
#include <stdio.h>

int main() {
	FILE *fptr;
	// write file
	fptr = fopen("ex8.txt", "w");
	fprintf(fptr, "36");
	fclose(fptr);
	
	// read file
	fptr = fopen("ex8.txt", "r");
	int n;
	fscanf(fptr, "%d", &n);
	if (n % 2 == 0) {
		printf("\n%d la so chan", n);
	} else {
		printf("\n%d la so le", n);
	}
}
