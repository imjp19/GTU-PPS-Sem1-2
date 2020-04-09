

#include<stdio.h>

void main(){


int a;


printf("---------------------------------------------------------------------\n");
printf("\tPPS-8-Accepted number is negative or positive or zero.\n");
printf("---------------------------------------------------------------------\n");

printf("\nEnter the number : ");
scanf("%d",&a);

printf("\n---------------------------------------------------------------------\n");

if(a>0){
    printf("%d is positive.",a);
}
else if(a<0){
    printf("%d is negative.",a);
}
else if(a==0){
    printf("%d is zero.",a);
}

printf("\n---------------------------------------------------------------------\n");
}






