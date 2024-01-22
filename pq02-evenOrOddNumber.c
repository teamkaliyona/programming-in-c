/*
  Practice Question 02
  Problem Statement: Find out if a number is even or odd
  Aim: Test understanding of using condition statements in C
*/

#include <stdio.h>

int main()
{

    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if(num % 2 == 0){
        printf("The number %d is even number\n", num);
    } else {
        printf("The number %d is odd number\n", num);
    }
    
    return 0;
}
