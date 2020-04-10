



#include<stdio.h>

void main(){


float basic;

printf("---------------------------------------------------------------------\n");
printf("\t\t\tPPS-13-Salary Slip\n");
printf("---------------------------------------------------------------------\n");

printf("\n Enter Basic Salary :");
scanf("%f",&basic);
printf("\n===================================");
printf("\n\tSALARY SLIP");
printf("\n===================================");
printf("\n Basic : %.2f",basic);
printf("\n DA : %.2f",basic*0.10);
printf("\n HRA : %.2f",basic*0.075);
printf("\n MA : %.2f",300.00);
printf("\n===================================");
printf("\n GROSS : %.2f",basic+(basic*0.10)+(basic*0.075)+300.00);
printf("\n===================================");
printf("\n PF : %.2f",basic*0.125);
printf("\n===================================");
printf("\n NET : %.2f",(basic+(basic*0.10)+(basic*0.075)+300.00)-(basic*0.125));
printf("\n===================================");

}







