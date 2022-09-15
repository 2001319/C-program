/*a C program that read numbers from an integer array and graph the information in the
form of bar chat*/

#include <stdio.h>
#define SIZE 10

int main(void)

{

// declare and initialize an array named n with size SIZE...

int n[SIZE] = {19, 3, 15, 7, 11, 9, 13, 5, 17, 1};

int i, j;

 

// display the table header

printf("%s%13s%17s\n","\tElement", "Value", "Histogram");

// do the iteration, outer for loop, read row by row...

for(i=0; i<= (SIZE-1); i++)

{

printf("%9d%19d ", i, n[i]);

 

// inner for loop, for every row, read column by column and print the bar...

for(j = 1; j<= n[i]; j++)

// print the 'bar', and repeat...

printf("*");

// go to new line for new row, and repeats...

printf("\n");

}

return 0;

}
	
	
	
	
	
	
	

