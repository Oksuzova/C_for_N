#include <stdio.h>

void main()
{
    const int len = 10;
    int mas[len];
    int tmp, check, up, down, mid, key, found;

    printf("Binary search\n");
    printf("Enter %d numbers to the one line and press Enter.\n", len);

    for (int i = 0; i < len; i++)
    {
        scanf("%i", &mas[i]);
    }

    for (int i = len-1; i >= 0; i--)
    {
        check = 1;
        for (int j = 0; j < i; j++)
        {
            if (mas[j] > mas[j+1])
            {
                tmp = mas[j];
                mas[j] = mas[j+1];
                mas[j+1] = tmp;
                check = 0;
                }
        }
        if (check == 1)
            break;
    }

    printf("\nSorted array: ");
    for (int i = 0; i < len; i++)
        printf(" %d ", mas[i]);

    printf("\nEnter the number for searching: ");
    scanf("%i", &key);

    down = 0;
    up = len;
    found = -1;

    while (down <= up){
        mid = (up + down)/2;

        if (key == mas[mid])
        {
           found = mid;
           break;
        }
        if (key > mas[mid])
            down = mid + 1;
        else
            up = mid - 1;
    }

    if (found == -1)
        printf("No match with the searching element.\n");
    else
        printf("The element %d is %dth", key, mid+1);

}
