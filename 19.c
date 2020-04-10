#include<stdio.h>

void main(){




printf("---------------------------------------------------------------------------------\n");
printf("\t\tPPS-19- to generate first n number of Fibonacci series\n");
printf("---------------------------------------------------------------------------------\n");



int no=10,i=0,j=1;
 printf(" %d %d",i,j);
 while(no>0)
 {
 printf(" %d",i+j);
 j=i+j;
 i=j-i;
 no--;
 }
 return 0;

printf("\n---------------------------------------------------------------------------------\n");
}















