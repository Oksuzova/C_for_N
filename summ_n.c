#include <stdio.h>

int main ()
{
    int n, sum = 0, memb = 1;

    printf("Calculating the partial sum of a row: 1, 3, 5, 7, ... n.\n");
    printf("Enter the number of row members -> ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i ++)
    {
        sum += memb;
        memb += 2;1
    }

    printf("The summ of first %d row members is %d. \n", n, sum);

    return 0;
}
