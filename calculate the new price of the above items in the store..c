

/*C program to  calculate the new price of the above items in the store.  */

#include <stdio.h>
//prototype functions
float calDiscountPercent(int category);
float calcNewPrice(int percentage, float price);
//Function declaration
//function main begin
int main(void)
{
	float price,newprice;
	int category;
	
	
	printf("\t ________________________________\n");
	printf("\t|Product Category|Discount percentage (%)|\n");
	printf("\t|________________|________________|\n");
	printf("\t|__________1_____|_________10_____|\n");
	printf("\t|__________2_____|________15______|\n");
	printf("\t|__________3_____|________20______|\n");
	
	
	
	
	
	printf("\n\nEnter Price : ");//user input price 
	scanf("%f",&price);//read the flot price
	printf("Enter product code : ");//user input category 
	scanf("%d",&category);//read the category
	if (category<1 || category>3){
		printf("Invalied category");
	}
	else 
		{
		
		newprice=calcNewPrice(calDiscountPercent(category),price);//function calling
		printf("New price : %.2f",newprice);//display new price after discount
	}
	
	

	
	
	return 0;
}//main function end here
float calDiscountPercent(int category)//Function implementation
{ 
switch(category){
	case 1: 
	return 10.0;
	break;
		case 2: 
	return 15.0;
		break;
		case 3: 
	return 20.0;
		break;
	default :
	   return 0;
}
}

//Function implementation
float calcNewPrice(int percentage, float price)
{ float amount;
amount= price-(price*( percentage/100.0));
return amount;

	
}
