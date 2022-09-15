#include<stdio.h>
int main(void)
{
	
	int item,quantity,counter =1;
	float bill=0,total,discount;
	
	
	
	printf("_____________________________________\n");
	printf("|item number|Unit price  |  Discount |\n");
	printf("|___________|____________|____________\n");
	printf("| 1         |    1000.00 |   10%     |\n");
	printf("| 2         |    1600.00 |   12%     |\n");
	printf("| 3         |    1400.00 |   15%     |\n");
	printf("______________________________________\n");
	
	printf("\n\n Press -1 to complete order\n\n ");
	
	
	
	while(item != -1 ){
	printf("\n\nEnter the Pizza type you want : ");
	scanf("%d",&item);

	if(item==1){
			printf("Entetr the quantity you want : ");
	        scanf("%d",&quantity);
	            if(quantity>=3){
	            	
		         total=(1000.00*quantity)-(1000.00*quantity*.01);
	             }
				else{
					total=(1000.00*quantity);
					}
	
		 printf("Your total  is : %.2f",total);
		 
	}
	 else if(item==2){
	 		printf("the quantity you want : ");
	scanf("%d",&quantity);
	  if(quantity>=3){
	    
		         total=(1600.00*quantity)-(1600.00*quantity*.12);
	             }
				else{
					total=(1600.00*quantity);
					}
			 printf("Your total  is : %.2f",total);			
	 }
	  else if(item==3){
	  		printf("Entetr the quantity you want : ");
	scanf("%d",&quantity);
		 if(quantity>=3){
	            	
		         total=(1400.00*quantity)-(1400.00*quantity*.15);
	             }
				else{
					total=(1400.00*quantity);
					}
					
			 printf("Your total  is : %.2f",total);			
	 }
counter =counter=1;
	}
	
	
	

	
	
	
	return 0;
}
