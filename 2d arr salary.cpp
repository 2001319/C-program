#include<stdio.h>

struct employee{
int id;
char name[20];
int xp;
float  sal;			
}emp[3];


int main(void)
{
int i;
float netsal[2]={0};

	
for(i=0;i<3;i++)
{
printf("Enter the  id %d :",i+1);
scanf("%d",&emp[i].id);
printf("Enter the name %d :",i+1);
scanf(" %s",&emp[i].name);
printf("Enter the experieance %d :",i+1);
scanf("%d",&emp[i].xp);
printf("Enter the salary %d :",i+1);
scanf("%f",&emp[i].sal);
printf("\n\n");
if( emp[i].xp>2){
 netsal[i]=(emp[i].sal-(emp[i].sal*0.1));
	}
	else {
	netsal[i]=emp[i].sal;
	}	
}
	
printf("\n\nEmployee ID\tNAme\t\tIncrement");	
for(i=0;i<3;i++){
	
printf("\n%d\t\t%s\t\t%0.2f",emp[i].id,emp[i].name,netsal[i]);	
	
	
	
	
}	
	
	
	
	
return 0;	
	
	
}
