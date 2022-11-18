#include <stdio.h>

#include <stdlib.h>

#include <time.h>

int main() {
   time_t t;
   int x1, x2, res, ans, counter, grade, rand_sign, change;
   char sign;

   printf("Testing your ability to add and subtract numbers.\n");
   printf("After the example, type the answer and press enter.\n");

   srand((unsigned) time( & t));;
   counter = 10;

   for (int i = 1; i <= 10; i++) {
      x1 = rand() % 97 + 2;
      x2 = rand() % 97 + 2;

      rand_sign = rand() % 2;
      if (rand_sign == 0) {
         sign = '+';
         res = x1 + x2;
      } else {
         sign = '-';
         if (x2 > x1) {
            change = x2;
            x2 = x1;
            x1 = change;
         }
         res = x1 - x2;
      }

      printf("%d %c %d = ", x1, sign, x2);
      scanf("%d", & ans);

      if (ans != res) {
         printf("Your are wrong! %d*%d = %d\n", x1, x2, res);
         counter--;
      }
      if (counter <= 5)
         i = 11;
   }

   if (counter > 5) {

      printf("Number of correct answers %d\n", counter);

      switch (counter) {
      case 10:
         grade = 5;
         break;
      case 9:
         grade = 4;
         break;
      case 8:
         grade = 4;
         break;
      case 7:
         grade = 3;
         break;
      }

      printf("Your grade is %d.\n", grade);
   } else
      printf("You have made too many mistakes. Get ready and come back again later.\n");

   return 0;
}
