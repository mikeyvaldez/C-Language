
// Enums are a data type that allows a programmer to define a variable
// and specify the valid values that could be stored into that variable
// ex: can create a variable named "myColor" and it can only contain one
// of the primary colors, red, yellow, or blue, and no other values


// enum primaryColor {red, yellow, blue}
// enum primaryColor myColor, gregsColor; (specified variables that can contain one of the three colors)

#include <stdio.h>
#include <stdbool.h>

// The following code displays the value of a boolean variable

int main() {
    
    enum gender {male, female};

    enum gender myGender;

    myGender = male;

    enum gender anotherGender = female;

    bool isMale = (myGender == anotherGender);

    printf(isMale ? "true" : "false"); // displays true of false depending on the variable value
    printf("%c", '\n');    

    return 0;
}



// The following code displays a blank line
// int main() {

//     char myCharacter = '\n';

//     printf("%c", myCharacter);

//     return 0;
// }