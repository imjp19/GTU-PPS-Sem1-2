
#include<stdio.h>

void main(){

float km,meter,feet,inches,cm;


printf("---------------------------------------------------------------------\n");
printf("PPS-5-convert distance kilometer to meter,feet,inches and centimeter\n");
printf("---------------------------------------------------------------------\n");

printf("\nEnter value of km : ");
scanf("%f",&km);



meter = km*1000;
cm=km*100000;
feet=km*3280.84;
inches=km*39370.07;


printf("\n---------------------------------------------------------------------\n");
printf("Meter : %f",meter);
printf("\nCentimeter : %f",cm);
printf("\nFeet : %f",feet);
printf("\nInches : %f",inches);

printf("\n---------------------------------------------------------------------\n");
}



