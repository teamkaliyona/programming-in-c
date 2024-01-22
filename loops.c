#include <stdio.h>

int main()
{
    //Printing repeatedly
    printf("Welcome to Kaliyona\n");
    printf("Welcome to Kaliyona\n");
    printf("Welcome to Kaliyona\n");
    printf("Welcome to Kaliyona\n");
    printf("Welcome to Kaliyona\n");
    
    int i =1;
    //While Loop
    while(i<=5){
        printf("Welcome to Kaliyona : %d\n", i);
        i++;
    }
    
    //Do-While Loop
    do {
        printf("Welcome to Kaliyona : %d\n", i);
        i++;
    }while(i<=5);
    
    //For Loop
    //for(int i=0; i<5; i++){
    for(int i=5;i>0;i--){
        printf("Welcome to Kaliyona\n");
    }
}

























