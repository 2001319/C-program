/*C program to create an integer array called Motion of size 5. Ask the user to enter
values to the array from the keyboard. Rotate the values of the array by one position in the
forward direction and display the values*/
#include<stdio.h>
int main() {


	int Motion[5];//array of 5 intergers
	int i;//counter
	int temp;
	for(i=0;i<5;++i){
		printf("Enter the value:");//user input numbers
		scanf("%d",&Motion[i]);//read and get the value to array
	}
	printf("Original array:\n");//user inputed values as line
	for( i=0;i<5;++i){
		printf("%d ",Motion[i]);
	}
	temp = Motion[0];
	for ( i = 0; i < 4; i++){
	    Motion[i] = Motion[i + 1];
	}
    
    Motion[4] = temp;

	printf("\n\nArray after right rotation:\n");
	for(i=0;i<5;++i){
		printf("%d ",Motion[i]);//user inputed values after rotations
	}



	return 0;
}
