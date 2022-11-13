#include <stdio.h>


int main()
{
    int choice, quant;
    float price;

    printf("Photo\nSize:\n1 - 9x12\n2 - 10x15\n3 - 18x24\nYour choice: \n-> ");
    scanf("%d", &choice);
    printf("Quantity \n -> ");
    scanf("%d", &quant);

    switch (choice)
    {
        case 1: price = 3.50; break;
        case 2: price = 5.00; break;
        case 3: price = 8.50; break;

        default: price = 0; break;
    }

    if (price != 0)
    {
        printf("\n---------------------\n");
        printf("Your price: %.2f grn\n", price);
        printf("Your quantity: %d\n", quant);
        printf("Your sum: %.2f grn\n", quant*price);

        float discount = (quant*price)/10;

        if (quant > 10)
            printf("Your discount: %.2f grn\n", discount);
        else
        {
            discount = 0;
            printf("Your discount: 0 grn\nFor discount your quantity should be more than 10.\n");
        }

        printf("For payment: %.2f grn\n", (quant*price)-discount);
    }
    else
            printf("Wrong material code\n");

    return 0;
}
