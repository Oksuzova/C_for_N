#include <stdio.h>

#include <time.h>

void main() {

   const int len = 10, width = 10;
   int mas[width][len];
   int tmp, up, down, found, max;

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

   for (int i = 0; i < len; i++)
    {
        int j = 0;
        max = mas[i][j];

            if (mas[i][j] < mas[i][j+2])
            max = j;


        tmp = mas[i][j];
        mas[i][j] = mas[max][j];
        mas[max][j] = tmp;
        j += 2;
    }


   printf("\n Sorted array: \n\n");

   for (int i = 0; i < width; i++) {
      for (int j = 0; j < len; j++)
         printf(" %3i ", mas[i][j]);
      printf("\n");
   }

}
