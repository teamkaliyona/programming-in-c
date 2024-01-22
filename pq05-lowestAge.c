/*
  Practice Question 05
  Problem Statement: Create a program that finds the lowest age among different ages
  Aim: Test understanding of using Arrays in C
*/

#include <stdio.h>

int main()
{

    int ages[] = {20, 22, 12, 34, 45, 23, 18, 29};
    
    int lowestAge = ages[0];
    
    int length = sizeof(ages) / sizeof(ages[0]);
    
    //for (int i=0; i<8; i++){
    for (int i=0; i<length; i++){
        if(ages[i]<lowestAge){
            lowestAge = ages[i];
        }
    }

    printf("Lowest age is %d\n", lowestAge);
    return 0;
}
