#include <stdio.h>

#define g 9.8 // acceleration of gravity

int main ()
{
    float t = 0;
    float x = 0.5;

    printf("-------------------------\n");
    printf("  time, s    speed, m\s  \n");
    printf("-------------------------\n");

    for (int i = 0; i < 10; i++)
    {
        printf("  %3.1f           %3.2f  \n", t, t*g);
        t = t + x;
    }

    return 0;
}
