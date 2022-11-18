#include <stdio.h>


int main() {
     int grn;

    printf("Please, enter grn: \n");
    scanf("%d", &grn);

    if (grn >= 10 && grn <= 20)
        printf("%d griven", grn);
        else {
                if (grn % 10 == 1)
                printf("%d grivna", grn);
                if (grn % 10 >= 2 && grn % 10 <=4)
                printf("%d grivny", grn);
                else
                    printf("%d griven", grn);
        }

    return 0;
    }
