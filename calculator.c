#include <stdio.h>
// Here is the calculator Code:
// Please include: subtraction, multiplication, and division.
// If you are confused with the code, do not be afraid to google
// the functions, data types, the int main(void), format specifiers etc.

int printNumbers(int x, int y);
int main(void) {
  int x; // instead of indenting after every line, you must use ; to end the
         // line
  int y;
  
  printf("Type your first number: ");
  scanf("%i", &x);
  
  if(x == 0){
    printf("You cannot enter 0 as the first number");
    return 0;
  }
  printf("\nType your second number: ");
  scanf("%i", &y);
  printNumbers(x,y);
  printf("\nThe first number is %i and the second number is %i", x, y);

  int sum = x + y;
  printf("\n\nThe sum of the numbers is %i", sum);

  int product = x * y;
  printf("\n\nThe product of the numbers is %i", product);

  // TODO: add the rest of the math operations here (make sure to follow the
  // same coding structure as above to make it easier to read!):
  
  int difference = x - y;
  printf("\n\nThe difference of the numbers is %i", difference);

  int quotient = x / y;
  printf("\n\nThe quotient of the numbers is %i", quotient);
  // always return 0; at the end of the main function
  return 0;
}

int printNumbers(int x, int y){
  printf("\nThe first number is %i and the second number is %i", x, y);
  return 0;
}