#include <stdio.h>

#define LB -2.0 // the lower bound of the argument range
#define HB 2.0 // the higher bound of the argument range
#define DX 0.5 // argument increment


int main ()
{
    float x, y; // argument and value of the function
    int n; // points

    n = (HB-LB)/DX+1;
    x = LB;

    printf("-----------------------\n");
    printf("    x     |      y     \n");
    printf("-----------------------\n");

    for (int i = 0; i < n; i++)
    {
        y = (-2.4*x*x)+5*x-3;
        printf(" %6.2f   |   %6.2f   \n", x, y);
        x += DX;
    }



    return 0;
}
