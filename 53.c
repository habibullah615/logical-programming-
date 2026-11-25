#include<stdio.h>
int main()
{
int x,y,pow,i;
printf(" enter the x and y");
scanf("%d %d",&x,&y);
pow=i=1;
while(i<=y)
{
pow=pow*x;
i++;}
printf("%dpowe of %d=%d\n",x,y,pow);
return 0;
}
