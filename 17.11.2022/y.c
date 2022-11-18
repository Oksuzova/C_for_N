#include <stdio.h>
#include <math.h>

int main ()
{
    float x, y, low_bound = -4, high_bound = 4, range = 0.5; // y = |x-2|+|x+1|

    printf("Table of y = |x-2|+|x+1| values in the interval (-4;4)\n");
    printf("      x         y      \n");


    int point = (high_bound-low_bound)/range +1;
    x = low_bound;

    for (int i = 0; i < point; i++)
    {
        y = fabs(x-2)+fabs(x+1);
        printf("    %5.2f     %5.2f    \n", x, y);
        x += range;
    }


    return 0;
}
