#include <stdio.h>

int main(void) {
  int number1, number2;
  printf("Enter the number1 and number2: ");
  scanf("%d%d",&number1, &number2);

  // number1 = number1 + number2;
  // number2 = number1 - number2;
  // number1 = number1 - number2;

  int temp = number1;
  number1 = number2;
  number2 = temp;
  
  printf("\nAfter swaping: number1 = %d number2 = %d", number1, number2);
  return 0;
}