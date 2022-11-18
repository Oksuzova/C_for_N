#include <stdio.h>


int main() {
    int num, div, nul;

    printf("Enter an integer and press enter\n-> ");
    scanf("%d", &num);
    div = 2;

  do {
        nul = num % div;
        if (nul != 0) div++;

  } while (nul != 0);

  if (div == num)
    printf("%d is prime number.", num);
  else
    printf("%d is not prime number.", num);


  return 0;
}
