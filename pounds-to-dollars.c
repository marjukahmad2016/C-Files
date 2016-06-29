#include <stdio.h> 

int convert(void); 

int main(void) {

int am = convert(); 

printf("%d", am); 

return 0; 


}

 int convert(void) {
	
	int dollar_am;  

	printf("Enter the dollar amounts that had to be converted into pounds: "); 

	scanf("%d", &dollar_am); 

	return dollar_am / 2; 
}