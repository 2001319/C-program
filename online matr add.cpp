#include<stdio.h>
int main(void)
{
	int arr1[1][1];
	int arr2[1][1];
	int add[1][1];
	int i,j,size;
	
	printf("Enter the size : ");
	scanf("%d",&size);
	
		printf("Enter the numbers for matrix 1\n\n");
	
		for(i=0;i<size;i++){
		     for(j=0;j<size;j++){
			
		printf("Enter the number : ");
		scanf("%d",&arr1[i][j]);	
	}
		}
		printf("Enter the numbers for matrix 2\n\n");
	
		for(i=0;i<size;i++){
		    for(j=0;j<size;j++){
			
		printf("Enter the number : ");
		scanf("%d",&arr2[i][j]);	
			
		}	
		}
	
		for(i=0;i<size;i++){
		    for(j=0;j<size;j++){
			add[i][j]=arr1[i][j]+arr2[i][j];
		
		}	
		}
	
	for(i=0;i<size;i++){
		    for(j=0;j<size;j++){
			printf("\t%d",add[i][j]);
		
		}
		printf("\n")	;
		}
	
	
	
	
	
	
	
	
	
	return 0;
}
