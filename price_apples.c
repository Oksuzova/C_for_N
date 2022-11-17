#include <stdio.h>
#include <time.h>

int main ()
{
    float price;
    int weight = 100;

    printf("Enter the price of one kilogram and press enter(for example: '16.5'): \n -> ");
    scanf("%f", &price);

    printf("     Weight         Price     \n");

    for (int i = 0; i < 10; i++)
    {
        float grm = ((float)weight/1000)*price;
        printf("     %4d          %5.2f     \n", weight, grm);
        weight += 100;

    }

    return 0;
}
