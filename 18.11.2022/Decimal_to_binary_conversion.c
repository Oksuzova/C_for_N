#include <stdio.h>
#include <math.h>

int main ()
{
    int num, lg, bin, res = 0, nums;
    printf("Enter an integer from 0 to 255 and press enter: \n");
    scanf("%d", &num);
    nums = num;

    for (int i = 0; nums >= 1; i++)
    {
        lg = log2 (nums);
        bin =1;

            for(int i = 0; i < lg; i++)
            {
                bin *= 1*10;
            }
        res += bin;
        nums -= pow (2, lg);
    }

    printf("Decimal %d is binary %d", num, res);

    return 0;
}
