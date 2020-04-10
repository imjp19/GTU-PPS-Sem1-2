#include<stdio.h>

void main(){


int person,height,weight,count=0;;


printf("---------------------------------------------------------------------------------\n");
printf("PPS-24- five persons height and weight and count the number of person having \nheight greater than 170 and weight less than 50,)\n");
printf("---------------------------------------------------------------------------------\n");

for(person=0;person<5;person++)
{
 printf("\nEnter Detail of Person - %d\n",person+1);
 printf("Enter Height : ");
 scanf("%d",&height);
 printf("Enter Weight : ");
 scanf("%d",&weight);
 printf("\n-------------------------------\n");

 if(height>170)
 {
 if(weight<50)
 {
 count++;
 }
 }
}


printf("\n---------------------------------------------------------------------------------\n");
printf("\n Total Person having Height > 170 and Weight < 50 : %d",count);
printf("\n---------------------------------------------------------------------------------\n");
}


















