

/*
    This program calculates the perimeter of a rectangle
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    // declaration of variables
    double width = 32.3;
    double height = 15.3;
    double perimeter = 0.0;
    double area = 0.0;

    // perimeter calculation
    perimeter = 2.0 * (height + width);
    area = width * height;

    // displaying output
    printf("%c", '\n'); // prints new line
    printf("Width is: %.2f, Height is: %.2f, Perimeter is: %f\n", width, height, perimeter);
    printf("Area is: %f\n", area);

    return 0;
}