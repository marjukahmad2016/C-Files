#include <stdio.h> 

int o_to_c(int ounces); 

int main(void){

	int ounces; 
	int cups; 

	printf("Enter ounces: "); 
	scanf("%d", &ounces); 

	cups = o_to_c(ounces); 
	printf("%d", cups); 
	return 0; 

}

int o_to_c(int o) {
	return o / 8; 
}