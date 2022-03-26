#include <stdio.h>
#include <string.h>

int main (void) {
   // Declare variables
   char inputText[50];
   int count = 0;
   
   // Run this at least once
   do{
      // On the first run we print this
      if (count == 0){
         printf("Please enter a line of text (maximum 50 characters). Type done, Done, or d to exit program. \n");
      }
      // If it isn't the first run we print this
      else {
         printf("Please enter another line of text (maximum 50 characters). Type done, Done, or d to exit program.\n");
      }
      
   // After giving the user the prompt we will receive their input
   fgets(inputText, 50, stdin);
   
   // Eliminate end-of-line char
   if (inputText[strlen(inputText) - 1] == '\n') {
      inputText[strlen(inputText)-1] = '\0';
   }
   
   // If the input text is something besides Done, done, or d then we print the string backwards
   if (strcmp(inputText, "done")!=0 && strcmp(inputText, "Done")!=0 && strcmp(inputText, "d")!=0){
      
   for (int i = strlen(inputText); i >= 0; --i){
       if(inputText[i] != '\0'){
           printf("%c", inputText[i]);
       }
       else {
           continue;
       }
      
   }
   printf("\n");
   }
   count += 1;
   } while (strcmp(inputText, "done")!=0 && strcmp(inputText, "Done")!=0 && strcmp(inputText, "d")!=0);
   // When the program is done we just add a new line to our last prompt
   printf("\n");
   
   return 0;
}