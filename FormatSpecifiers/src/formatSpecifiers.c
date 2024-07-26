

/*
    The following program declares variables of various data types 
    and using the correct format specifier to print the variable
*/

#include <stdio.h>


int main(void) {

    int integerVar = 100;
    float floatingVar = 331.79;
    double doubleVar = 8.44e+11; // scientific notation (very big number)
    char charVar = 'W';

    _Bool boolVar = 0;

    printf("integerVar = %i\n", integerVar);
    printf("floatingVar = %f\n", floatingVar);
    printf("doubleVar = %e\n", doubleVar);
    printf("doubleVar = %g\n", doubleVar);
    printf("charVar = %c\n", charVar);
    
    printf("boolVar = %i\n", boolVar);    

    return 0;
}