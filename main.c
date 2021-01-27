#include <stdio.h>

int main(){
    int minutes ;
    double days ;
    double years ;
    int minutesInYear;

    printf("Please enter a certain amount of minutes to be displayed in days and years . \n") ;

    scanf("%d", &minutes) ;

    days = (double) minutes / 60 / 24 ;
    years = (double) minutes / 60 / 24 / 7 / 52 ;
    minutesInYear =  60 * 24 * 7 * 52 ;

    printf("There are %d minutes in a year. You entered %d minutes, this translates to %lf days and %lf years .\n",minutesInYear , minutes, days, years) ;

    return 0 ;
}