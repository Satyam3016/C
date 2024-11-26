#include <stdio.h>

int main()
{
    float side, perimeter;

    printf("Enter side of the square: ");
    scanf("%f", &side);

    perimeter = (4 * side);

    printf("Perimeter of square = %f units ", perimeter);

    return 0;
}