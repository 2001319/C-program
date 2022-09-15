#include <stdio.h>

int main(void) 
{
int player,counter,score,round,n,total=0,max=0,maxp;

printf("Enter the number of players :");
scanf("%d",&player);

for(counter=1;player>=counter;++counter){
	total=0;
	printf("\n\nEnter the player number  :");
	scanf("%d",&n);     
	for(round=1;round<=3;++round){
	printf("Enter the score %d  :",round);
	scanf("%d",&score);
	
	total= total+score;

}

	printf("Total is = %d\n\n",total);

		if(max<total){
        max=total;
        maxp=player;
      
}
}
printf("MAx is : %d ",max);
printf("\nMAx player is : %d ",maxp);


	return 0;
}
	
	
	
