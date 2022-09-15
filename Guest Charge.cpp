//this program

#include <stdio.h>
//prototype functions
float getDiscountPrice(int noOfGuests, float chargePerGuest);
float getAmount(int noOfGuests, float chargePerGuest, float discount);
int main(void)

{
	
	int nog;
	float dis,cpg,amu;
	printf("Enter the number of guests :");
	scanf("%d", &nog);
	printf("Enter the Charge :");
	scanf("%f", &cpg);
	
	if(nog>200){
	
    dis= getDiscountPrice(nog,cpg);	
	printf("Discount :%.2f",dis);

}
	amu=getAmount(nog,cpg,dis);
	printf("\nTotal ammount is : %.2f",amu);
	
	return 0;
}//function main end here
//function get discountprice begins
float getDiscountPrice( int noOfGuests, float chargePerGuest)
{
   
   float result;
	result = noOfGuests * chargePerGuest*0.1;
	return result;
	
}// function getamount begin here
float getAmount(int noOfGuests, float chargePerGuest, float discount)
{
float res;
res  = (noOfGuests * chargePerGuest )- discount;
return res;
}//function gtdis end here
