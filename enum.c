#include <stdio.h>

int main() {
    enum Company {
        GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT
    };

    enum Company xerox = XEROX ;
    enum Company google = GOOGLE ;
    enum Company ebay = EBAY ;

    printf("The Value of Xerox is %d . \n", xerox);
    printf("The Value of Google is %d .\n", google);
    printf("The Value of Ebay is %d . \n", ebay);


    return 0 ;

}