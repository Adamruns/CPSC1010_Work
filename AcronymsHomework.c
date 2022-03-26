#include <stdio.h>
#include <string.h>
#include <ctype.h>

void CreateAcronym(char* userPhrase, char* userAcronym){
    int count = 0;
    if (!islower(userPhrase[0])){
        userAcronym[0] = userPhrase[0];
        count += 1;
        userAcronym[count] = '.';
        count += 1;
    }
    for (int i = 0; i < strlen(userPhrase); ++i){
        if (userPhrase[i] == ' '){
            if(!islower(userPhrase[i+1])){
                userAcronym[count] = userPhrase[i+1];
                count += 1;
                userAcronym[count] = '.';
                count += 1;
            }
        }
    }

}

int main (void){
    char userPhrase[50];
    char userAcronym[50];


    printf("Enter a word or phrase (maximum 50 characters):");
    fgets(userPhrase, 50, stdin);
    CreateAcronym(userPhrase, userAcronym);
}