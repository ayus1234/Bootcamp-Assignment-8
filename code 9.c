//Program to Convert even number into its upper nearest odd number using Switch Statement.

#include<stdio.h>
int main()
{
    int num,odd;
    while(1)
    {
        printf("\n\nEnter the Even Number\n");
        scanf("%d",&num);
        switch(num%2)
        {
            case 0:
               odd=num+1;
               printf("Upper Nearest Odd Number of %d is %d",num,odd);
               break;

            case 1:
               printf("%d is not an Even Number",num);
               break;

            default:
               printf("%d is not an Even Number",num);
        }
    }
    return 0;
}