#include <stdio.h>


int main()
{
    float sum, percent, payment;
    int term;


    printf("Sum (grn.) -> ");
    scanf("%f", &sum);

    printf("Term (month) -> ");
    scanf("%d", &term);

    printf("Percentage rate (annual) -> ");
    scanf("%f", &percent);

    printf("---------------------------------\n");
    printf("    Debt    Percent   Payment    \n");
    printf("---------------------------------\n");

    float perc_month = percent/12;
    float perc_grn = sum * perc_month/100;
    payment = sum/term + perc_grn;
    float payment_month = sum/term;
    float total_percent = 0;

        for (int i = 0; sum != 0; i++)
        {
            printf("%d  %9.2f  %9.2f  %9.2f   \n", i, sum, perc_grn, payment);
            sum -= payment_month;
            total_percent += perc_grn;
            perc_grn = sum * perc_month/100;
            payment = payment_month + perc_grn;

        }

    printf("---------------------------------\n");
    printf("Total percent: %.2f grn\n", total_percent);


    return 0;
}
