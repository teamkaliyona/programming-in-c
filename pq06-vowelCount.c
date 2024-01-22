/*
  Practice Question 06
  Problem Statement: Count number of vowels in a given word
  Aim: Test understanding of using Strings in C
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char word[20];
    
    printf("Enter a word in lowercase: ");
    scanf("%s", word);
    
    int vowelCnt = 0;
    int length = strlen(word);
    for(int i=0; i< length; i++){
        if(word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u'){
            vowelCnt++;
        }
    }
    
    printf("Total vowel count is %d", vowelCnt);
    
    return 0;
}
