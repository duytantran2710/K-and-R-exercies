// Exercise 1-4: Print Celsius to Fahrenheit table.
// by DTT
#include <stdio.h>

int main () {
  float fahr, cels;
  int minTemp, maxTemp, step;

  minTemp = 0;
  maxTemp = 300;
  step = 20;

  cels = minTemp;

  printf(" Celsius to Fahrenheit Table\n");
  printf("-----------------------------\n");
  printf(" Cels\t\t\tFahr\n");
  while (cels <= maxTemp) {
    fahr = (cels * (9.0/5.0)) + 32;
    printf(" %3.0f\t\t\t%3.0f\n", cels, fahr);
    cels += step;
  }

  return 0;
}

