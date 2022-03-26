#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

int main (void) {
    // We need 3 string variables the original the one without spaces and the one backwards
    // Note that userStringBackwards also has no spaces
    char userString[50];
    char userStringNoSpaces[50];
    char userStringBackwards[50];
    
    // We also need count variables to help with removing spaces and reversing it
    int count = 0; 
    int count2 = 0;

    bool isPalindrome = true;

    // This is our typical user prompt
    printf("Please enter a word or phrase (maximum 50 characters): \n");

    // We use fgets instead of scanf because we don't want it to stop at spaces
    fgets(userString, 50, stdin);

    if (userString[strlen(userString)] == '\n'){
        userString[strlen(userString)] = '\0';
    }

    for (int i = 0; i < strlen(userString); ++i ){
        if (userString[i] != ' ' && userString[i] != '\n' && userString[i] != '\0'){
            userStringNoSpaces[count] = userString[i];
            count += 1;
        }
    }

    for (int i = strlen(userStringNoSpaces); i >= 0; --i){
        if (userStringNoSpaces[i] != '\n' && userStringNoSpaces[i] != '\0'){
            userStringBackwards[count2] = userStringNoSpaces[i];
            count2 += 1;
        }
    }

    for (int i = 0 ; i < strlen(userStringNoSpaces); ++i){
        if (tolower(userStringNoSpaces[i]) != tolower(userStringBackwards[i])){
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome){
        printf("'%s' is a palindrome.\n", userStringNoSpaces);
    }
    else{
        printf("'%s' is not a palindrome.\n", userStringNoSpaces);
    }
    return 0;
}