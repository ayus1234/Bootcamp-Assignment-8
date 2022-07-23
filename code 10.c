//Program to find all roots of a quadratic equation using switch case

#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,D;
    float x,y;
    while(1)
    {
        printf("\n\nEnter the Coefficient of x^2, x and constant term\n");
        scanf("%d %d %d",&a,&b,&c);
        D=b*b-4*a*c;
        switch(D>0)
        {
            case 0:
               switch(D<0)
               {
                   case 0:
                      printf("Roots are Real and Equal\n");
                      x=-b/(2.0*a);
                      printf("Roots are %f and %f",x,x);
                      break;

                    case 1:
                       printf("Roots are Imaginary");
                       break;
               }
               break;

            case 1:
               printf("Roots are Real and Distinct\n");
               x=(-b+sqrt(D))/(2.0*a);
               y=(-b-sqrt(D))/(2.0*a);
               printf("Roots are %f and %f",x,y);
        }
    }
    return 0;
}