#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
    time_t t;
    int x1, x2, res, ans, counter, grade;


    printf("Multiplication table check with evaluation.\n");
    printf("After the example, type the answer and press enter.\n");

    srand((unsigned) time(&t));;
    counter = 10;

    for (int i = 1; i <= 10; i++)
    {
        x1 = rand() % 7 + 2;
        x2 = rand() % 7 + 2;
        printf("%d*%d = ", x1, x2);
        scanf("%d", &ans);
        res = x1 * x2;


        if (ans != res)
            {
            printf("Your are wrong! %d*%d = %d\n", x1, x2, res);
            counter--;
            }
        if (counter <= 5)
            i = 11;
    }

    if (counter > 5){

    printf("Number of correct answers %d\n", counter);

    switch(counter)
    {
        case 10: grade = 5; break;
        case 9: grade = 4; break;
        case 8: grade = 4; break;
        case 7: grade = 3; break;
        default: grade = 2; break;
    }

    printf("Your grade is %d.\n", grade);
    }

    else
        printf("You have made too many mistakes. Get ready and come back again later.\n");

    return 0;
}
