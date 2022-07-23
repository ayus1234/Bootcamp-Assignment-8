/*Menu driven program with the following options:

a. Check whether a given set of three numbers are lengths of an isosceles triangle or not
b. Check whether a given set of three numbers are lengths of sides of a right angled triangle or not
c. Check whether a given set of three numbers are equilateral triangle or not
d. Exit

*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int choice,side1,side2,side3;
    while(1)
    {
        printf("\n\na. To check whether the Lengths of Sides are of Isosceles Triangle or not");
        printf("\nb. To check whether the Lengths of Sides are of Right-angled Triangle or not");
        printf("\nc. To check whether the Lengths of Sides are of Equilateral Triangle or not");
        printf("\nd. Exit");
        printf("\n\nEnter Your Choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
               printf("Enter the Lengths of Sides of Triangle\n");
               scanf("%d %d %d",&side1,&side2,&side3);
               if(side1==side2 || side2==side3 || side1==side3)
                  printf("The Triangle is Isosceles");
                else
                  printf("The Triangle is not Isosceles");
                break;

            case 2:
               printf("Enter the Lengths of Sides of Triangle\n");
               scanf("%d %d %d",&side1,&side2,&side3);
               if(side1*side1==side2*side2+side3*side3 || side2*side2==side1*side1+side3*side3 || side3*side3==side1*side1+side2*side2)
                  printf("The Triangle is Right-angled");
                else
                  printf("The Triangle is not Right-angled");
                break;

            case 3:
               printf("Enter the Lengths of Sides of Triangle\n");
               scanf("%d %d %d",&side1,&side2,&side3);
               if(side1==side2 && side1==side3)
                  printf("The Triangle is Equilateral");
                else
                  printf("The Triangle is not Equilateral");
                break;

            case 4:
               exit(0);    

            default:
               printf("Invalid Choice\n");
               printf("Please Try Again");           
        }
    }
    return 0;
}