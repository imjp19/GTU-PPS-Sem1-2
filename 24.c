#include<stdio.h>

void main(){

int no,i;


printf("---------------------------------------------------------------------------------\n");
printf("\t\tPPS-24- check whether the given number is prime or not.\n");
printf("---------------------------------------------------------------------------------\n");

printf("\n Enter No to check whether its prime or not :");
scanf("%d",&no);

printf("\n---------------------------------------------------------------------------------\n");
for(i=2;i<no;i++)
{
 if(no%i==0)
 {
 printf("\n %d is not prime",no);
 break;
 }
}
if(no==i)
{
 printf("%d is prime",no);
}

printf("\n---------------------------------------------------------------------------------\n");
}
















