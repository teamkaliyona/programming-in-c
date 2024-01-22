#include <stdio.h>

int main() {
    
  FILE *fptr;
  char myString[100];
  
  // Create a file on your computer (kaliyona.txt)
  fptr = fopen("kaliyona.txt", "w"); //write mode
  fptr = fopen("kaliyona.txt", "a"); //append mode
  fptr = fopen("kaliyona.txt", "r"); //read mode
  
  fprintf(fptr, "Namaskara"); //Writes contents to the file
  fprintf(fptr, " Kaliyona Family"); 
  
  //fgets(myString, 100, fptr); //gets only first line 
  //printf("%s", myString);
  
  //use while loop to print all lines
  while(fgets(myString, 100, fptr)){
      printf("%s", myString);
  }

  // Close the file
  fclose(fptr);

  return 0;
}
