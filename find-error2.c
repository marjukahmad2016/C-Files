#include <stdio.h>

void func(void);  

int main(void) {
	func(); 
	return 0; 
}

void func(void) {
	int i; 
	printf("Enter a number:"); 
	scanf("%d", &i); 
}