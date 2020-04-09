#include<stdio.h>

void main(){

int a,b,plus,minus,div,mul;

printf("-------------------------------------------------\n");
printf("\t\tPPS-1-Calculator\n");
printf("-------------------------------------------------\n");

printf("Enter 1st number :");
scanf("%d",&a);

printf("\nEnter 2nd number : ");
scanf("%d",&b);

plus=a+b;
minus=a-b;
div=a/b;
mul=a*b;

printf("\nAddition : %d",plus);
printf("\nSubstraction : %d",minus);
printf("\nMultiplication : %d",mul);
printf("\nDivision : %d",div);

printf("\n-------------------------------------------------");
}
