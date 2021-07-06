#include <stdio.h>
#include <stdlib.h>

int main(void){
  printf("***^^***\n");
  printf("Welcome to the Decimal to Hexadecimal converter!\n");
  printf("Enter an integer:\n");
  int decimal;
  scanf("%d",&decimal);
  printf("Decimal Representation:   %9d\n", decimal);
  printf("Converted to Hexadecimal: %9x\n", decimal);
  printf("***^^***\n");
  return 0;
}

