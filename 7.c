

#include<stdio.h>

void main(){

float d,u,a;
int t;


printf("---------------------------------------------------------------------\n");
printf("PPS-7-Find out distance travelled by the equation d = ut+ at^2/2\n");
printf("---------------------------------------------------------------------\n");

printf("\nEnter value of a : ");
scanf("%f",&a);
printf("\nEnter value of u : ");
scanf("%f",&u);
printf("\nEnter value of t : ");
scanf("%d",&t);

d = u*t + (a*t*t)/2;
printf("\n---------------------------------------------------------------------\n");

printf("Distance is equal to : %f",d);

printf("\n---------------------------------------------------------------------\n");
}




