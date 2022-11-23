#include <stdio.h>

#include <time.h>

void main() {

   const int len = 10,
      width = 10;
   int mas[width][len];
   int tmp, up, down, found;

   time_t t;

   srand((unsigned) time( & t));;

    for (int i = 0; i < width; i++) {
        for (int j = 0; j < len; j++)
            mas[i][j] = rand() % 100;
    }

    printf(" Unsorted array: \n\n");

   for (int i = 0; i < width; ++i) {
      for (int j = 0; j < len; ++j) {
         printf(" %3i ", mas[i][j]);
      }
      printf("\n");
   }

   up = len - 1;
   down = 0;
   found = 1;

   while ((down < up) && found > 0) {
      found = 0;
      for (int j = 0; j < len; j++) {
         for (int i = down; i < up; i++) {
            if (mas[i][j] < mas[i + 1][j]) {
               tmp = mas[i][j];
               mas[i][j] = mas[i + 1][j];
               mas[i + 1][j] = tmp;
               found = 1;
            }
         }
      }
      up--;

      for (int j = 0; j < len; j++) {
         for (int i = up; i > down; i--) {
            if (mas[i - 1][j] < mas[i][j]) {
               tmp = mas[i][j];
               mas[i][j] = mas[i - 1][j];
               mas[i - 1][j] = tmp;
               found = 1;
            }
         }
      }
      down++;
   }

   printf("\n Sorted array: \n\n");

   for (int i = 0; i < width; i++) {
      for (int j = 0; j < len; j++)
         printf(" %3i ", mas[i][j]);
      printf("\n");
   }

}
