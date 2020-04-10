



#include<stdio.h>

void main(){

int no,fact=1;


printf("---------------------------------------------------------------------------------\n");
printf("\t\tPPS-17-to find factorial of a given number.\n");
printf("---------------------------------------------------------------------------------\n");

printf("\n Enter No to find its Factorial : ");
scanf("%d",&no);

printf("\n---------------------------------------------------------------------------------\n");
while(no>1)
{
 fact=fact*no;
 no=no-1;
}
printf("Factorial of entered no is : %d",fact);


printf("\n---------------------------------------------------------------------------------\n");
}













