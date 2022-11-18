#include <stdio.h>


int main() {

  int num, max;

  printf("Determination of the maximum number from the entered sequence of positive numbers.\n");
  printf("Please enter numbers. Enter zero to finish.\n -> ");
  scanf("%d", & num);
  max = num;

  do {
    printf(" -> ");
    scanf("%d", & num);
    if (num > max)
      max = num;
  } while (num != 0);

  printf(" The max num is %d", max);

  return 0;
}
