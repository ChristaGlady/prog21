#include<stdio.h>
#include<conio.h>

int main()
{
int no1,no2,temp;
clrscr();
printf("enter two numbers\t");
scanf("%d %d",&no1,&no2);
printf("Numbers before swap %d %d\n",no1,no2);
temp=no1;
no1=no2;
no2=temp;
printf("numbers after swap %d %d \n",no1,no2);
getch();
return 0;
}

