#include<stdio.h>
int main(){
  int num1, num2, mul;
  
  //Asking for input
  printf("Enter first number: ");
  scanf("%d", &num1);
  printf("Enter second number: ");
  scanf("%d", &num2);
  
  mul = num1 * num2;
  printf("Mul of %d and %d is: %d", num1, num2, mul
  );
  return 0;
}