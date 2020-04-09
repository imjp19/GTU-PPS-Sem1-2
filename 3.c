
#include<stdio.h>

void main(){

int p,n;
float i,r;

printf("-------------------------------------------------\n");
printf("\tPPS-3-Find simple interest\n");
printf("-------------------------------------------------\n");

printf("\nEnter PRINCIPLE AMOUNT : ");
scanf("%d",&p);

printf("Enter RATE OF INTEREST : ");
scanf("%f",&r);

printf("Enter NUMBER OF YEARS : ");
scanf("%d",&n);

i=(p*r*n)/100;

printf("\n-------------------------------------------------\n");
printf("Simple interest is : %f",i);

printf("\n-------------------------------------------------\n");
}

