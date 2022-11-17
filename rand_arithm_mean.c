#include <stdio.h>
#include <time.h>

int main ()
{
    int random, arith_mean;
    time_t t;
    srand((unsigned) time(&t));

    printf("Random integer: \n");

    for(int i = 0; i < 10; i++)
    {
        random = rand() % 10+1;
        printf(" %d \n", random);
        arith_mean += random;
    }

    arith_mean = arith_mean/10;
    printf("Arithmetic mean: %d \n", arith_mean);

    return 0;
}
