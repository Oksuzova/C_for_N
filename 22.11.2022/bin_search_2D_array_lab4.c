#include <stdio.h>

#include <time.h>

void main() {
   const int len = 5, width = 5;
   int mas[width][len];
   int tmp, check, up, down, mid, mid1, key, found;
   time_t t;

   srand((unsigned) time( & t));;

   for (int i = 0; i < width; ++i) {
      int numbers[10];
      for (int j = 0; j < 10; ++j)
         numbers[j] = j;
      for (int k = 0; k < len; ++k) {

         int ra = rand() % (10 - k);
         mas[i][k] = numbers[ra];
         numbers[ra] = numbers[9 - k];
      }
   }

   for (int i = 0; i < width; ++i) {
      for (int j = 0; j < len; ++j) {
         printf(" %d ", mas[i][j]);
      }
      printf("\n");
   }

   printf("\nEnter the number for searching: ");
   scanf("%i", & key);

   for (int i = 0; i <= width - 1; i++) {
      check = 0;
      while (check != 1) {
         check = 1;
         for (int j = 0; j < len - 1; j++) {
            if (mas[i][j] > mas[i][j + 1]) {
               tmp = mas[i][j];
               mas[i][j] = mas[i][j + 1];
               mas[i][j + 1] = tmp;
               check = 0;
            }
         }
      }
   }

   printf("\nSorted array: \n");

   for (int i = 0; i < width; i++) {
      for (int j = 0; j < len; j++)
         printf(" %i ", mas[i][j]);
      printf("\n");
   }

   for (int i = 0; i <= width - 1; i++) {
      down = 0;
      up = len;

      while (down <= up) {
         mid = (up + down) / 2;

         if (key == mas[i][mid]) {
            found = mid;
            mid1 = i;
            printf("\nThe element %d is %i row %i column\n", key, mid1 + 1, found + 1);
            found = -1;
            break;
         }
         if (key > mas[i][mid])
            down = mid + 1;
         else
            up = mid - 1;
      }

   }
   if (found != -1)
      printf("\nNo match with the searching element.\n");
}
