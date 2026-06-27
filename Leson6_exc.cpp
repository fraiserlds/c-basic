#include <stdio.h>

	int main() {
	 // Cho 1 dãy s? 1,4,6,2,8,9,12. Hãy li?t kê các s? ch?n ? dãy s? trên
	 int num[] = {1,4,6,2,8,9,12};
	 
	 int length = sizeof(num) / sizeof(num[0]);
	 
	 for (int i = 0; i < length; i++) {
	 	if (num[i] % 2 == 0) {
			printf("%d\n", num[i]);
		}
	 }
		
	// tinh tong day so tren
	
	int sum = 0;
	for (int j = 0; j < length; j++) {
		sum += num[j];
	}
	printf("%d\n", sum);
	
	// Hãy tìm ra s? l?n nh?t, s? nh? nh?t ? dãy s? trên
	
	int max, min = num[0];
	for (int k = 1; k < length; k++) {
		if (max < num[k]) {
			max = num[k];
		}
		if (min > num[k]) {
			min = num[k];
		}
	}
	printf("So lon nhat la %d\n", max);
	printf("So nho nhat la %d\n", min);
	
	// hãy s?p x?p m?ng theo th? t? tang d?n. g?i ý dùng 2 vòng l?p
	int temp;
	for(int i = 0; i < length; i++) {
		for (int j = i + 1; j < length; j++) {
			if (num[i] > num[j]) {
				temp = num[i];
				num[i] = num[j]; // num[i] co gia tri moi
				num[j] = temp; // num[j] la gia tri cu
			}
		}
	}
	
	for (int i = 0; i < length; i++) {
		printf("%d\n", num[i]);
	}
}

