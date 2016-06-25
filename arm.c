#include <stdio.h>
#include<conio.h>
int main()
{
    int number, originalNumber, remainder, result = 0;
clrscr();
    printf("Enter a three digit integer: ");
    scanf("%d", &number);
  if(number<0)
  {
        printf("can't find for a negative number");
  }
else
{
    originalNumber = number;

    while (originalNumber != 0)
    {
        remainder = originalNumber%10;
        result += remainder*remainder*remainder;
        originalNumber /= 10;
    }

    if(result == number)
        printf("%d is an Armstrong number.",number);
    else
        printf("%d is not an Armstrong number.",number);
}
getch();
    return 0;
}
