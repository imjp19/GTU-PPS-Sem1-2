



#include<stdio.h>

void main(){

int a[10],i,min,max;


printf("---------------------------------------------------------------------\n");
printf("PPS-15-find out the Maximum and Minimum number from given 10 numbers\n");
printf("---------------------------------------------------------------------\n");

for(i=0;i<10;i++)
{
 printf("\n Enter Integer Value [%d] : ",i+1);
 scanf("%d",&a[i]);
 if(i==0)
 {
 min=max=a[i];
 }
 else
 {
 if(min>a[i])
 {
 min=a[i];
 }
 if(max<a[i])
 {
 max=a[i];
 }
 }
}
printf("\n Minimum : %d",min);
printf("\n Maximum : %d",max);


printf("\n---------------------------------------------------------------------\n");
}











