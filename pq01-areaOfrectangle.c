/*
  Practice Question 01
  Problem Statement: Calculate the area of the rectangle
  Aim: Test understanding of using arithmetic operations in C
*/

#include <stdio.h>

int main()
{

    int area, length, width;
    
    printf("Enter the length and width of a rectangle");
    scanf("%d %d", &length, &width);
    
    area = length * width;
    
    printf("\nArea of the rectangle is %d", area);

    return 0;
}
