/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the
   average of the two marks. */

#include <stdio.h>

int main() {
  float m1, m2, avg, sum;
  printf("Enter mark1: ");
  scanf("%f", &m1);

  printf("Enter mark2: ");
  scanf("%f", &m2);

  sum = m1 + m2;
  avg = (float)sum / 2;

  printf("Average : %.2f", avg);

  return 0;
}
