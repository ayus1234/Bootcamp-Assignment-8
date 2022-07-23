/*Menu driven program with the following options:

a. Addition
b. Subtraction
c. Multiplication
d. Division
e. Exit

*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int choice,num1,num2;
    while(1)
    {
        printf("\n\na. Addition");
        printf("\nb. Subtraction");
        printf("\nc. Multiplication");
        printf("\nd. Division");
        printf("\ne. Exit");
        printf("\n\nEnter Your Choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
               printf("Enter two numbers\n");
               scanf("%d %d",&num1,&num2);
               printf("Sum of %d and %d is %d",num1,num2,num1+num2);
               break;

            case 2:
               printf("Enter two numbers\n");
               scanf("%d %d",&num1,&num2);
               printf("Difference of %d and %d is %d",num1,num2,num1-num2);
               break;

            case 3:
               printf("Enter two numbers\n");
               scanf("%d %d",&num1,&num2);
               printf("Product of %d and %d is %d",num1,num2,num1*num2);
               break;

            case 4:
               printf("Enter two numbers\n");
               scanf("%d %d",&num1,&num2);
               printf("Quotient of %d and %d is %d",num1,num2,num1/num2);
               break;

            case 5:
               exit(0);

            default:
               printf("Invalid Choice\n");
               printf("Please Enter Correct Choice");
        }
    }
    return 0;
}