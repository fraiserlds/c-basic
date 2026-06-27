#include <stdio.h>

int main() {
	// index			  0			  1 		2		3
	char* fruits[] = {"tangrine", "grapes", "apple", "banana"};
	
	// truy cap phan tu
	printf("%s\n", fruits[1]); // grapes
	
	// lay kich thuoc array
	int length = sizeof(fruits) / sizeof(fruits[0]);
	printf("%d\n", length);
	
	// vong lap lay phan tu trong array
	for (int i = 0; i < length; i++) {
		printf("%s\n", fruits[i]);
	}
	
	// mang da chieu
	int matrix[3][4] = {
	// 	 0  1  2  3
		{1, 4, 2, 9},	 // 0
	// 	 0  1  2  3	
		{3, 6, 8, 10},	 //1
	// 	 0  1  2  3	
		{11, 12, 13, 14} // 2
	};
	
	printf("%d\n", matrix[1][2]); // 8
}
