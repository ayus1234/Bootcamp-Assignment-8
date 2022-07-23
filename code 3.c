//Program which takes the day number of a week and displays a unique greeting message for the day

#include<stdio.h>
int main()
{
    int day_num;
    while(1)
    {
        printf("\n\nEnter the Day Number of the Week\n");
        scanf("%d",&day_num);
        switch(day_num)
        {
            case 1:
               printf("HAPPY MONDAY\n");
               printf("Have a Great Start of Your Week");
               break;

            case 2:
               printf("GOOD TIDINGS TUESDAY");
               break;

            case 3:
               printf("HAVE A WONDERFUL WEDNESDAY");
               break;

            case 4:
               printf("IT'S A THANKFUL THURSDAY");
               break;

            case 5:
               printf("HAVE A FABULOUS FRIDAY");
               break;

            case 6:
               printf("HAVING A JOYFUL AND AMAZING SATURDAY\n");
               printf("Enjoy Your Weekend");
               break;

            case 7:
               printf("HAVE A BLESSED AND BEAUTIFUL SUNDAY");
               break;

            default:
               printf("INVALID DAY NUMBER\n");
               printf("Please Enter Valid Day Number");
        }
    }
    return 0;
}