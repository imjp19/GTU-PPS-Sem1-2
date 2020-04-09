

#include<stdio.h>

void main(){


char ch;


printf("---------------------------------------------------------------------\n");
printf("\tPPS-11- check whether the entered character is capital, \n\t\t small letter,digit or any special character.\n");
printf("---------------------------------------------------------------------\n");

printf("\nEnter Any Character :");
scanf("%c",&ch);

printf("\n---------------------------------------------------------------------");

if(ch>='0' && ch<='9')
{
 printf("\n Entered Character is Digit");
}
else if(ch>='A' && ch<='Z')
{
 printf("\n Entered Character is Capital Letter");
}
else if(ch>='a' && ch<='z')
{
 printf("\n Entered Character is Small Letter");
}
else
{
 printf("\n Entered Character is Special Character");
}


printf("\n---------------------------------------------------------------------\n");
}







