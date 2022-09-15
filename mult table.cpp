#include<stdio.h>
int multiply(int a,int b);
int main(void)
{
	
	int num,range;
	
	 printf("Enter a positive number\n");  
    scanf("%d", &num);
	 printf("Enter the range\n");  
    scanf("%d", &range);
 
  	multiply(num,range);
	
	return 0;
}

int multiply(int a,int b)
{
	int c,ans;
   for(c=1;c<=b;c++){
   	ans=c*a;
   	printf("%d * %d = %d\n",a,c,ans);	
	}


	
	
}

