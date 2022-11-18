#include <stdio.h>

int main()
{
    int n;
    float sum = 0, memb;
    printf("Calculation of the sum of the series 1-1/3+1/5-1/7+1/9...1/n\n");
    printf("and comparison of the resulting value with p/4\n");
    printf("Please, enter n \n -> ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        memb = (float)1/(i*2-1);

        if (i % 2 == 0)
            memb = -1 * memb;

        sum += memb;
    }
     printf("Sum of the series is %.4f\n", sum);
     printf("pi/4 based on the sum of the series (summ * 4): %.6f\n", sum*4);



    return 0;
}
