#include<stdio.h>
int main(void)
{
	int i,j,size=1,N,c=1;
	
	printf("Enter the Number :");
	scanf("%d",&N);
	
	
	while(N<0){
	printf("Invalli number, Enter number :");
	scanf("%d",&N);
	}	
	printf("\n\n");
	
while(c!=N+1)	{

for(i=1;i<=c;i++){
	for(j=1;j<=c;++j){
		
		printf("%d",c);
	};
	printf("\n");
}
	
	printf("\n");
	printf("\n");
	
	
	c=c+1;
}

	
	
	return 0;
}
