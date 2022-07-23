/*Program to convert a positive number into a negative number and negative number into a positive number using 
  a switch statement.*/

#include<stdio.h>
int main()
{
    int num,positive,negative;
    while(1)
    {
        printf("\n\nEnter the number\n");
        scanf("%d",&num);
        switch(num>0)
        {
            case 0:
               switch(num<0)
               {
                   case 0:
                      printf("Zero is neither Positive nor Negative");
                      break;

                    case 1:
                      positive=num*(-1);
                      printf("Positive of %d is %d",num,positive);
                      break;
               }
               break;

            case 1:
               negative=num*(-1);
               printf("Negative of %d is %d",num,negative);
        }
    }
    return 0;
}