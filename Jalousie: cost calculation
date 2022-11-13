#include <stdio.h>


int main()
{
    float width, height, price, cust_size;
    int choice;

    printf("Jalousie\n Width (sm)\n --> ");
    scanf("%f", &width);
    printf("Height (sm)\n --> ");
    scanf("%f", &height);

    printf("Material:\n");
    printf("1 - plastic\n");
    printf("2 - textiles\n");
    printf("3 - aluminum\n");
    printf("Your choice: \n");
    scanf("%d", &choice);

    switch(choice)
    {

        case 1: price = 200; break;
        case 2: price = 250; break;
        case 3: price = 350; break;

        default: price = 0; break;
    }
        if (price != 0)
        {
            cust_size = (width * height)/10000;
            printf("Your price per square meter: %.2f grn\n", price);
            printf("Area: %.2f m2\n", cust_size);
            printf("For payment: %.2f grn\n", cust_size*price);
        }

        else
            printf("Wrong material code\n");

    return 0;
}
