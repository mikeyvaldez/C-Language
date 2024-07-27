


// Take not of prefix and postfix when using the ++ and -- operators
// ++ before(prefix) the variable increments the variable by 1 before the program is executed
// the result of this will display the answer incremented by 1
// if the ++ operator is after(postfix) the variable it is incremented by 1
// after the program is executed. The same goes for the -- operator.

#include <stdio.h>


int main() {

    int a = 33;
    int b = 15;
    int result = 0;

    // result = a + b; // addition
    // result = a - b; // subtraction
    result = a * b;  // multiplication    
    result = a / b; // division    
    // result = a % b;   // modulo or remainder of

    printf("c is %d\n", ++result);    // usess ++ as a prefix so it will display the result incremented by 1

    return 0;
}