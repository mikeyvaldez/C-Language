



#include <stdio.h>
#include <stdlib.h>



int main() {

    double width = 32.3;
    double height = 15.3;
    double perimeter = 0.0;
    double area = 0.0;

    perimeter = 2.0 * (height + width);
    area = width * height;

    printf("%c", '\n');
    printf("Width is: %.2f, Height is: %.2f, Perimeter is: %f\n", width, height, perimeter);
    printf("Area is: %f\n", area);


    return 0;
}