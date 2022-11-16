#include <stdio.h>

int main ()
{
    int pow = 1;

    printf("Table of powers of two\n\n");

    for (int i = 0; i <= 10; i++)
    {
        printf("   %3d       %4d   \n", i, pow);
        pow *=2;
    }

    return 0;
}
