#include <stdio.h>
int main()
{
    
float bs;
printf(" enter basic salary");
scanf("%f",bs);
float da,hra;
da=0.4*bs;
printf("enter the dearness allowance");
scanf("%f",da);
hra=0.2*bs;
printf(" enter the house rent");
scanf("%f",hra);float remainingsalary;
remainingsalary=bs-da-hra;
printf("enter remaining salary");
scanf("%f", remainingsalary);
return 0;
}