/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  int m1, m2;
  float avg;

  printf("Enter the marks :\n");
  scanf("%d%d", &m1,&m2);

  avg = (m1+m2) / 2;

  printf("Average is = %.2f\n", avg);
  
  return 0;
}

