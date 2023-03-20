/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the
main() function.

Do not change the code given in the main() function when you are implementing
your solution.*/

#include <stdio.h>
// declaring the functions
int minimum();
int maximum();
int multiply();

int main() {
  int no1, no2;
  printf("Enter a value for no 1 : ");
  scanf("%d", &no1);
  printf("Enter a value for no 2 : ");
  scanf("%d", &no2);
  printf("%d ", minimum(no1, no2));
  printf("%d ", maximum(no1, no2));
  printf("%d ", multiply(no1, no2));
  return 0;
}

// implementation of the minimum function
int minimum(int num1, int num2) {
  if (num1 > num2) {
    printf("Minimum: %d", num2);
  } else {
    printf("Minimum: %d", num1);
  }
}

// implementation of the maximum function
int maximum(int num1, int num2) {
  if (num1 > num2) {
    printf("Maximum: %d", num1);
  } else {
    printf("Maximum: %d", num2);
  }
}

//
int multiply(int num1, int num2) { printf("Multiply: %d", num1 * num2); }