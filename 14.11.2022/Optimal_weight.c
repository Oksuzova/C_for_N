#include <stdio.h>
#include <math.h>

int main() {
    int weight, height, optimal, result, x;

    printf("Enter in one line separated by a space,\n");
    printf("height (cm) and weight (kg), then press Enter\n  --> ");

    scanf("%d %d", &height, &weight);

    optimal = height - 100;

    if (weight == optimal)
        printf("Your weight is perfect!");
    if (weight < optimal)
    {
        x = optimal - weight;
        printf("You need to gain weight by %d kg", x);
    }
    else
    {
        x = weight - optimal;
        printf("You need to lose %d kg", x);
    }

    return 0;
    }
