#include<stdio.h>

void main(){

int no,sum=0;


printf("---------------------------------------------------------------------------------\n");
printf("\t\PPS-20-  to find out sum of first and last digit of a given number.\n");
printf("---------------------------------------------------------------------------------\n");

printf("\n Enter Any Number :");
 scanf("%d",&no);

printf("\n---------------------------------------------------------------------------------\n");
if(no<10)
{
sum = sum + (no*2);
}
 else
 {
 sum = sum + (no%10);
while(no>9)
{
no = no /10;
}
sum = sum + no;
 }
 printf("\Sum of First & Last Digit is : %d",sum);
printf("\n---------------------------------------------------------------------------------\n");
}















