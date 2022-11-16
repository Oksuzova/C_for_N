#include <stdio.h>

int main ()
{
    int n;
    float sum = 0;
    float memb = 0;

    printf("Calculating the partial sum of a row: 1+1/2+1/3+...+1/n.\n");
    printf("Enter the number of row members -> ");
    scanf("%d", &n);

    for (float i = 1; i <= n; i++)
    {
        memb = 1/i;
        sum += memb;
    }

    printf("The summ of first %d row members is %.4f. \n", n, sum);

    return 0;
}
