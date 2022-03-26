#include <stdio.h>
#include <stdbool.h>

int DaysInFeb (int userYear);

int main (void){
    
    int userYear;

    printf("Please enter a year\n");
    scanf("%d", &userYear);

    printf("There were %d days in in February in the year %d.", DaysInFeb(userYear), userYear);
    return 0;
}

int DaysInFeb (int userYear){
    bool isLeapYear = false;
    int days;
    if ( (userYear % 4 == 0 ) || (userYear % 100 == 0 && userYear % 400 == 0) ){
        isLeapYear = true;
    }
    if (isLeapYear){
        days = 29;
    }
    else {
        days = 28;
    }

    return days;
}