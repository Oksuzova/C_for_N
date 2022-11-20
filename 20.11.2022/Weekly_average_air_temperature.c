#include <stdio.h>

void main()
{
    char* day[] = {"Monday", "Tuesday", "Wednesday",
                    "Thursday", "Friday", "Saturday", "Sunday"};
    float temper[7];
    float sum;
    float aver;

    printf("Enter air temperature.\n");

    for (int i = 0; i <= 6; i++)
    {
        printf("%s -> ", day[i]);
        scanf("%f", &temper[i]);
        sum += temper[i];
    }
    aver = sum/7;

    printf("Weekly average air temperature: %.2f\n", aver);

}
