#include <stdio.h>
#include <string.h>

int main()
{
    //char myStr[] = {'K', 'A', 'L', 'I', 'Y', 'O', 'N', 'A', '\0'};
    char myStr[] = "KALIYONA";

    //Printing Strings
    printf("%s", myStr);
    
    //Using String in Loops
    int num = 0;
    
    for(int i=0; i<8; i++){
        if(myStr[i] == 'A'){
          num ++;
        }
        printf("%c\t", myStr[i]);
    }
    printf("\nCharacter A is occuring %d times in the given string", num);
    
    //strlen
    int length = strlen(myStr);
    printf("length of the string is %d\n", length);
    for(int i=0;i<length; i++){
        printf("%c", myStr[i]);
    }
    
    //strcpy
    char str2[10];
    strcpy(str2, myStr);
    printf("\nCopied String value is %s", str2);
    
    //strcmp - returns 0 if string values matches else returns integer
    if(!strcmp(myStr, str2)){
        printf("\nStrings are equal\n");
    }
    
    //strcat
    char greeting[30] = "Welcome to ";
    strcat(greeting, myStr);
    printf("%s", greeting);

    return 0;
}
















