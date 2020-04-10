



#include<stdio.h>

void main(){

int i;


printf("---------------------------------------------------------------------------------\n");
printf("PPS-16- input an integer number and check the last digit of number is even or odd\n");
printf("---------------------------------------------------------------------------------\n");

printf("\n Enter any Number : ");
scanf("%d",&i);

printf("\n---------------------------------------------------------------------------------\n");
if((i%10)%2==0)
{
 printf("Last Digit of Number is Even");
}
else
{
 printf("Last Digit of Number is Odd");
}

printf("\n---------------------------------------------------------------------------------\n");
}












