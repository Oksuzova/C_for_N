#include <stdio.h>


int main()
{
    float lower_temp, upper_temp; // the lower bound of temperature, the upper bound of temperature
    float step;


    printf("Enter the lower bound of temperature -> ");
    scanf("%f", &lower_temp);

    printf("Enter the upper bound of temperature -> ");
    scanf("%f", &upper_temp);

    printf("Enter the step of temperature -> ");
    scanf("%f", &step);

    printf("-------------------------\n");
    printf("      C           F      \n");
    printf("-------------------------\n");

    for(float c = lower_temp; c <= upper_temp; c += step)
    {
        float f = (float)9/5*c+32;
        printf("     %3.2f     %3.2f     \n", c, f);

    }
    return 0;
}
