# include <stdio.h>
int main(void)
{
	int i,j;//counters
int A[4][4]={  {5,7,8,10},
               {9,3,0,6},
			   {8,1,9,2},
			   {4,7,2,1}}; // Matrix 1
			   
    int B[4][4]={{2,2,1,3},
             	{8,1,3,1},
				{1,2,2,4},
				{3,1,1,2}}; // Matrix 2
    int C[4][4]; // Resultant matrix
for( i = 0; i <4; ++i){
	
for( j = 0; j <4; ++j){
C[i][j]=A[i][j]+B[i][j];
printf("%d\t",C[i][j]);	//display c matrix
}
printf("\n");//new line
}

return 0;
}//end main function

