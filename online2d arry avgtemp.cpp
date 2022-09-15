#include<stdio.h>
int main(void)
{
	float temp[2][2]={0};
	float avgtemp[1]={0};
	int i,j;
	
	
	for(i=0;i<2;i++){
			printf("Enter the temprature morning :");
			scanf("%f",&temp[i][0]);
			printf("Enter the temprature noon :");
			scanf("%f",&temp[i][1]);
			printf("Enter the temprature evening :");
			scanf("%f",&temp[i][2]);
			printf("\n");	
		avgtemp[i]=(temp[i][0]+temp[i][1]+temp[i][2])/3;
	}
	
	
	

	printf("\t\t ----\n");
	printf("\tcolombo\t| %.1f |\n",avgtemp[0]);
	printf("\t\t ----\n");
	printf("\tKandy  \t| %.1f |\n",avgtemp[1]);
	printf("\t\t ----");

	
	
	
	
	return 0;
}
