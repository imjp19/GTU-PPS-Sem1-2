
#include<stdio.h>

void main(){

int a,b,num1,num2,t;


printf("-------------------------------------------------\n");
printf("\tPPS-4-interchange two numbers\n");
printf("-------------------------------------------------\n");

printf("\nEnter 1st number : ");
scanf("%d",&a);

printf("Enter 2nd number : ");
scanf("%d",&b);

t=b-a;

num1=t+a;


num2=num1-t;


printf("\n-------------------------------------------------\n");
printf("After interchange 1st number is : %d",num1);
printf("\nAfter interchange 2st number is : %d",num2);

printf("\n-------------------------------------------------\n");
}


