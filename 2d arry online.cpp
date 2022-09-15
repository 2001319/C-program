#include<stdio.h>

struct bookss{
int bookid;
char title[20];
int coppies;
int  readers;			
}book[3];


int main(void)
{
int i,max=0;
char name[20];	
	
for(i=0;i<3;i++)
{
printf("Enter the book id %d :",i+1);
scanf("%d",&book[i].bookid);
printf("Enter the title %d :",i+1);
scanf(" %s",&book[i].title);
printf("Enter the coppies %d :",i+1);
scanf("%d",&book[i].coppies);
printf("Enter the readers %d :",i+1);
scanf("%d",&book[i].readers);

if(max <= book[i].readers){
   max=book[i].readers;
  name[20]=book[i].title;
	}	
}
	
printf("\n\nName of the book : %s",name[20]);	
printf("\nNumber of readers : %d",max);	
	
	
	
	
return 0;	
	
	
}
