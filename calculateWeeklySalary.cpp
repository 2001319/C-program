#include <stdio.h>
float calculateWeeklySalary(int grade, float hrsWorked);
void printDetails(int grade, float hrsWorked, float salary);
int main(void)

{
	
	int grade;
	float hrsWorked,salary;
	
	printf("Entert the Grade :");
	scanf("%d",&grade);
	printf("Entert No of Hours :");
	scanf("%f",&hrsWorked);
	
salary=calculateWeeklySalary(grade,hrsWorked);
	
printDetails( grade, hrsWorked, salary);

	return 0;
}

float calculateWeeklySalary(int grade, float hrsWorked)
{

float result,hourlyrate;

if(grade == 1){
	hourlyrate=100.00;	
}
else if(grade == 2){
	hourlyrate=200.00;	
}
else if(grade == 3){
	hourlyrate=300.00;
}
result = hrsWorked * hourlyrate;

return result;
}
void printDetails(int grade, float hrsWorked, float salary)
{
	printf("\n\nEnterd Grade : %d\nEnterd Hours : %.2f\nWeekly Salary : %.2f\n",grade, hrsWorked, salary);
}
