//Program which takes the month number as an input and display number of days in that month.

#include<stdio.h>
int main()
{
    int month_num,year;
    while(1)
    {
        printf("\n\nEnter the Month Number\n");
        scanf("%d",&month_num);
        switch(month_num)
        {
            case 1:
               printf("31 Days");
               break;

            case 2:
            {
                printf("Enter the Year\n");
                scanf("%d",&year);
                if(year%4)
                {
                    printf("Not a Leap Year\n");
                    printf("28 Days");
                }
                else if(year%100)
                {
                    printf("Leap Year\n");
                    printf("29 Days");
                }
                else if(year%400)
                {
                    printf("Not a Leap Year\n");
                    printf("28 Days");
                }
                else
                {
                    printf("Leap Year\n");
                    printf("29 Days");
                }
            }
            break;

            case 3:
               printf("31 Days");
               break;

            case 4:
               printf("30 Days");
               break;

            case 5:
               printf("31 Days");
               break;

            case 6:
               printf("30 Days");
               break;

            case 7:
               printf("31 Days");
               break;

            case 8:
               printf("31 Days");
               break;

            case 9:
               printf("30 Days");
               break;

            case 10:
               printf("31 Days");
               break;

            case 11:
               printf("30 Days");
               break;

            case 12:
               printf("31 Days");
               break;

            default:
               printf("Invalid Month Number");
        }
    }
    return 0;
}