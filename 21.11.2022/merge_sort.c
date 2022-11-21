#include <stdio.h>

void main()
{
    const int len = 5;
    int masi[len], masj[len], mask[len*2];
    int tmp, check, i, j, k;

    printf("Merge sort\n");
    printf("Enter %d numbers for the first array.\n", len);

    for (int i = 0; i < len; i++)
    {
        printf(" -> ");
        scanf("%i", &masi[i]);
    }

    printf("Enter %d numbers for the second array.\n", len);

        for (int j = 0; j < len; j++)
    {
        printf(" -> ");
        scanf("%i", &masj[j]);
    }

    for (int i = len-1; i >= 0; i--)
    {
        check = 1;
        for (int j = 0; j < i; j++)
        {
            if (masi[j] > masi[j+1])
            {
                tmp = masi[j];
                masi[j] = masi[j+1];
                masi[j+1] = tmp;
                check = 0;
                }
        }
        if (check == 1)
            break;
    }

    for (int i = len-1; i >= 0; i--)
    {
        check = 1;
        for (int j = 0; j < i; j++)
        {
            if (masj[j] > masj[j+1])
            {
                tmp = masj[j];
                masj[j] = masj[j+1];
                masj[j+1] = tmp;
                check = 0;
                }
        }
        if (check == 1)
            break;
    }

    i=j=k=0;
    do {
        if (masi[i] > masj[j])
            mask[k++] = masj[j++];
            else
                if (masi[i] < masj[j])
                mask[k++] = masi[i++];
            else {
                mask[k++] = masj[j++];
                mask[k++] = masi[i++];
            }
    } while (i < len && j < len);

    while (i < len)
        mask[k++] = masi[i++];

    while (j < len)
        mask[k++] = masj[j++];

    printf("\nFirst array: \n");

    for (int i = 0; i < len; i++)
        printf(" %d", masi[i]);
        printf("\n");

    printf("\nSecond array: \n");

    for (int i = 0; i < len; i++)
        printf(" %d", masj[i]);
        printf("\n");

    printf("\nSorted array: \n");

    for (int i = 0; i < len*2; i++)
        printf(" %d", mask[i]);
        printf("\n");
}

