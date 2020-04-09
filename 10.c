

#include<stdio.h>

void main(){


int a,b,c;


printf("---------------------------------------------------------------------\n");
printf("\t\tPPS-10-out maximum out of three numbers\n");
printf("---------------------------------------------------------------------\n");

printf("\n Enter 1st Number :");
scanf("%d",&a);
printf("\n Enter 2nd Number :");
scanf("%d",&b);
printf("\n Enter 3rd Number :");
scanf("%d",&c);

printf("\n---------------------------------------------------------------------");

if(a>b)
{
 if(a>c)
 {
 printf("\n 1st Number %d is maximum",a);
 }
 else
 {
 printf("\n 3rd Number %d is maximum",c);
 }
}
else
{
 if(b>c)
 {
 printf("\n 2nd Number %d is maximum",b);
 }
 else
 {
 printf("\n 3rd Number %d is maximum",c);
 }
}


printf("\n---------------------------------------------------------------------\n");
}








