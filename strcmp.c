#include<stdio.h>
#include<conio.h>

int main()
{
int res;
char str1[100],str2[100];
clrscr();
puts("enter string 1");
gets(str1);
puts("enter string 2");
gets(str2);
res=strcmp(str1,str2);
if(res==0)
puts("strings are equal");
else
puts("strings are not equal");
getch();
return 0;
}
