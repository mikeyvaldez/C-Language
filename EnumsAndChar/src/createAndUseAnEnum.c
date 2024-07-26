
/*
   The program creates an enum type named company
     -Values are GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT

    The program also creates three variables of the above enum type that are assigned values: XEROX, GOOGLE, and EBAY
    The program displays as output, the value of the three variables with each variable separated by a newline
      -Output is XEROX, GOOGLE, and EBAY variables printed in that order:
         2
         0
         4
*/

#include <stdio.h>
#include <stdlib.h>


int main() {

    // remember enums are integers under-the-hood***

    // enum Company {GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT};
    enum Company {GOOGLE, FACEBOOK, XEROX, YAHOO = 10, EBAY, MICROSOFT}; // if YAHOO = 10 then EBAY = 11 and MICROSOFT = 12

    enum Company xerox = XEROX;
    enum Company google = GOOGLE;
    enum Company ebay = EBAY;

    printf("The value of xerox is: %d\n", xerox);
    printf("The value of google is: %d\n", google);
    printf("The value of ebay is: %d\n", ebay);

    return 0;
}






