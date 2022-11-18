#include <stdio.h>

#include <stdlib.h>

#include <time.h>

int main() {
   time_t t;

   int num, ans, counter;

   printf("You must guess the number X in 5 tries.\n");
   printf("The computer thought of a number from 1 to 100. After entering, press enter.\n");

   srand((unsigned) time( & t));;

   num = rand() % 99 + 1;
   counter = 0;

   for (int i = 0; i < 5; i++) {
      scanf("%d", & ans);

      if (counter < 5) {
         if (ans > num) {
            printf("No! The number < than your answer. Try again.\n");
            counter++;
         }
         if (ans < num) {
            printf("No! The number > than your answer. Try again.\n");
            counter++;
         }
         if (ans == num) {
            printf("You win!\n");
            return;
         }
      }
      if (counter >= 5){
         printf("\nYour lose! Try again and good luck.\n");
         printf("\nThe number was %d. \n", num);
      }
   }

   return 0;
}
