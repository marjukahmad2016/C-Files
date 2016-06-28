#include <stdio.h> 

/* find a square of a number */ 

int get_sqr(void); 

int main(void) {

	int num = get_sqr(); 
	printf("%d", num); 

	return 0; 
}

int get_sqr(void) {

    int num; 
	scanf("%d", &num); 
	return num*num; 
}



