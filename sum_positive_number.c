#include <stdio.h>

int main()
{
    int n, sum = 0; //quantity of positive numbers, sum of positive numbers

    printf("Enter quantity of positive numbers -> ");
    scanf("%d", &n);

    for(int i = 0; i<=n; i++)
    {
      sum += i;
    }

    printf("The sum %d of positive numbers -> %d", n, sum);

    return 0;
}
