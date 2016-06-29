#include <stdio.h> 

int main(void) {
	
	int num; int choice; 
	printf("Enter between 1 and 2 between the choice you want to do: feet to meter or meter to feet"); 
	scanf("%d", &choice); 

	printf("Enter what amount you want it to be changed to be:"); 
	scanf("%d", &num); 

	if (choice == 1) printf("Feet to meter:  %f", num / 3.28);
    if (choice == 2) printf("meter to feet:  %f", num * 3.28);

    return 0;  
 

}