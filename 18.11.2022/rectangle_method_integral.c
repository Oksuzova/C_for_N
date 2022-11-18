#include <stdio.h>

int main()
{
    float low_lim, up_lim, delta_x, integral = 0, point, y, x;

    printf("Rectangle method integral.\n");

    printf("Lower limit of the interval: \n");
    scanf("%f", &low_lim);

    printf("Upper limit of the interval: \n");
    scanf("%f", &up_lim);

    printf("Function increment: \n");
    scanf("%f", &delta_x);

    x = low_lim;
    point = (up_lim - low_lim)/delta_x+1;

    for (int i = 1; i <= point; i++)
    {
        y = 5*x*x-x+2;
        integral += y * delta_x;
        x += delta_x;
    }

    printf("%.2f", integral);

    return 0;
}
