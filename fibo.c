#include<stdio.h>
#include<conio.h>
 
int main()
{
  int first=0,second=1,third,i,n;
  clrscr();
  printf("Enter how many elements?");
  scanf("%d",&n);
  if(n<0)
  printf("can't print fibonacci series");
  if(n>0)
  printf("\n%d %d",first,second);
  for(i=2;i<n;++i)
    {
        third=first+second;
        printf(" %d",third);
        first=second;
        second=third;
    }
    getch();
    return 0;
}
