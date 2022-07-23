//Program to check whether a year is a leap year or not. Using switch statement

#include<stdio.h>
int main()
{
    int year;
    while(1)
    {
        printf("\n\nEnter the Year\n");
        scanf("%d",&year);
        switch(year%4==0 || year%400==0)
        {
            case 0:
               printf("%d is not a Leap Year",year);
               break;

            case 1:
               printf("%d is a Leap Year",year);
        }
    }
    return 0;
}