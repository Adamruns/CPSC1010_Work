#include <stdio.h>
#include <string.h>

int main (void){

    char original[50];
    char reversed[50];

    fgets(original, 50, stdin);
    scanf("%s", reversed);

    if(original[strlen(original)-1] == '\n'){
        original[strlen(original)-1] = '\0';
    }

    int j = 0 ;
    for (int i = strlen(original) - 1;i >=0; --i){
        reversed[j] = original[i];
        j++;
    }
    
    printf("Original = %s\n", original);
    printf("Reversed = %s\n", reversed);

    return 0;
}