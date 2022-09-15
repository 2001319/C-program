#include<stdio.h>
int main(void)
{
	int type,c,qty;
	float total1,total2,total3,bill;
		
	printf("_______________________________________\n");
	printf("|Burger type|extra charge per burger  |\n");
	printf("|___________|_________________________|\n");
	printf("| 1         | No extra charge         |\n");
	printf("| 2         |    50.00                |\n");
	printf("| 3         |   100.00                |\n");
	printf("_______________________________________\n");
	
	
	printf("\n\nEnter the burger type you want :");
	scanf("%d",&type);
	
	while(type<=3 && type>0){
		
		if(type==1){
		
		 printf("Enter the qty you want :");
	     scanf("%d",&qty);
	     total1=500*qty;
		
	    }            
		
		else if(type==2){
		
		 printf("Enter the qty you want :");
	     scanf("%d",&qty);
	     total2=500*qty+50*qty;	
	   
	    }            
		else if(type==3){
		
		 printf("Enter the qty you want :");
	     scanf("%d",&qty);
	     total3=500*qty+100*qty;	
	    
	    }            
			bill=total1+total2+total3;		
	printf("\nTotal bill is : %.2f",bill)	;	
	printf("\n\nEnter the burger type you want :");
	scanf("%d",&type);
		
		
		
	}	
		


	
	
	
	return 0;	
	}
	
	
	
	
	
	
	
	
	
	

