


#include<stdio.h>

void main(){


int marks;

printf("---------------------------------------------------------------------\n");
printf("\t\tPPS-12- display equivalent grade\n");
printf("---------------------------------------------------------------------\n");

printf("\nEnter marks between 0-100 :");
scanf("%d",&marks);

printf("\n---------------------------------------------------------------------");
if(marks>100 || marks <0)
{
 printf("\n Your Input is out of Range");
}
else if(marks>=80)
{
 printf("\n You got Distinction");
}
else if(marks>=60)
{
 printf("\n You got First Class");
}
else if(marks>=40)
{
 printf("\n You got Second Class");
}
else
{
 printf("\n You got Fail");
}

printf("\n---------------------------------------------------------------------\n");
}







