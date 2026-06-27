#include <stdio.h>

// TH1: function khong co tham so
void helloc() {
	printf("Hello world\n");
}

// TH2: func co tham so
void introduce(char name [], int age) {
	printf("My name is %s and i am %d years old\n", name, age);
}

// TH3: func ko co tham so, su dung return
char* say() {
	return "Hello everyone";
}

int getNum() {
	return 10;
}

// TH4: func co tham so, su dung return
int sum(int a, int b) {
	return a + b;
}

int main() {
  helloc();
  
  introduce("Lam", 17);
  
  char* s = say();
  printf("%s\n", s);
  
  int number = getNum();
  printf("%d\n", number);
  
  printf("%d\n", sum(13, 7));
  
  return 0;
} 
