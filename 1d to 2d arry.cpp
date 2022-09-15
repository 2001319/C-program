#include<stdio.h>
#define size 12
int main(void)
{
int myarr1d[12]={0};
int myarr2d[4][3]={0};
int i,j,k=0;


for(i=0;i<size;i++){
	
printf("enter the number :");
scanf("%d",&myarr1d[i]);	
}
printf("Arry one is\n");
for(i=0;i<size;i++){
printf("%d \t",myarr1d[i]);
}
printf("\n\n Arry two is\n\n");

for(i=0;i<4;i++){
	if(k==size)
	break;
	for(j=0;j<3;j++){
	myarr2d[i][j]=myarr1d[k];
	
	k++;
    }
}
for(i=0;i<4;i++){
	
	for(j=0;j<3;j++){
		printf("%d\t",myarr2d[i][j]);
}
printf("\n");
}

	return 0;
}

