#include<stdio.h>
int main(){
  int num1, num2, div;
  
  //Asking for input
  printf("Enter first number: ");
  scanf("%d", &num1);
  printf("Enter second number: ");
  scanf("%d", &num2);
  
  div = num1 / num2;
  printf("Div of %d and %d is: %d", num1, num2, div
  );
  return 0;
}