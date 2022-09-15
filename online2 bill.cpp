#include<stdio.h>
int main(void)
{
	
	int item,quantity,counter =1;
	float bill=0,total1,total2,total3;
	
	
	
	printf("__________________________\n");
	printf("|item number|Unit price  |\n");
	printf("|___________|____________|\n");
	printf("| 1         |    30.00   |\n");
	printf("| 2         |    45.00   |\n");
	printf("| 3         |    55.50   |\n");
	printf("__________________________\n");
	
	printf("\n\n Press -99 to complete order\n\n ");
	
	
	
	while(item != -99 ){
	printf("Enter the Food item you want : ");
	scanf("%d",&item);

	if(item==1){
			printf("Entetr the quantity you want : ");
	scanf("%d",&quantity);
		 total1=(30.00*quantity);
	}
	 else if(item==2){
	 		printf("Entetr the quantity you want : ");
	scanf("%d",&quantity);
	 	total2=(45.00*quantity);
	 }
	  else if(item==3){
	  		printf("Entetr the quantity you want : ");
	scanf("%d",&quantity);
	 	total3=(55.50*quantity);
	 }
counter =counter=1;
	}
	
	
	bill=total1+total2+total3;
printf("\n\nYour total Bill is : %.2f",bill);
	
	
	
	return 0;
}
