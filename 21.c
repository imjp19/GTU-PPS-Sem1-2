#include<stdio.h>

void main(){

int no,sum=0,i=0,val;


printf("---------------------------------------------------------------------------------\n");
printf("PPS-21- to find the sum and average of different numbers which are accepted \nby user as many as user wants\n");
printf("---------------------------------------------------------------------------------\n");

printf("\n How many nos you want to enter : ");
 scanf("%d",&no);
 printf("\n");
while(i<no)
 {
 printf("Enter No [%d]:",i+1);
 scanf("%d",&val);
 sum=sum+val;
 i++;
 }
printf("\n---------------------------------------------------------------------------------\n");

 printf("\n Sum = %d",sum);
 printf("\n Sum = %.2f",((float)sum)/no);
printf("\n---------------------------------------------------------------------------------\n");
}
















