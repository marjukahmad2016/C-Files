#include <stdio.h> 

void sum(int x, int y); 

int main(){
	sum(1,20); 
	sum(9,6); 
	sum(8,9); 

	return 0; 

}

void sum(int x, int y) {
 printf("%d", x+y); 
}