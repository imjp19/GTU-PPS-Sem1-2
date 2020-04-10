#include<stdio.h>

void main(){


int student=0,sum=0,marks=0,sub;


printf("---------------------------------------------------------------------------------\n");
printf("\tPPS-22-  calculate average and total of 5 students for 3 subjects \n\t(use nested for loops)\n");
printf("---------------------------------------------------------------------------------\n");

for(student=0;student<5;student++)
{
 sum=0;
 printf("\nEnter Marks for Student - %d \n\n",student+1);
 for(sub=0;sub<3;sub++)
 {
 printf("Enter Marks for Subject - %d ",sub+1);
 scanf("%d",&marks);
 sum=sum+marks;
 }
 printf("\n----------------------------------\n");
 printf("\n For Student - %d : ",student+1);
 printf("\n Sum = %d",sum);
 printf("\n Average = %.2f\n",((float)sum)/sub);
  printf("\n----------------------------------\n");
}

printf("\n---------------------------------------------------------------------------------\n");
}

















