#include <stdio.h>

int main()
{
    int mult = 7, res;

    for (int i = 2; i <= 9; i++)
    {
        res = mult*i;
        printf("\n %d*%d=%d\n", mult, i, res);

    }



    return 0;
}
