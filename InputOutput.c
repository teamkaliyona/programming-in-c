#include <stdio.h>

int main() {
    
    int num = 30;
    float pi = 3.14;
    int age, num1, num2;
    
    printf("Hello World\n");
    
    printf("Welcome to Kaliyona\n");
    
    printf("Number value is %d", num); //Format Specifier
    
    printf("\n PI Value is %f", pi);
    
    printf("\nEnter the age of the user ");
    
    scanf("%d", &age);
    
    printf("The age of the user is %d", age);
    
    printf("\nEnter two numbers ");
    
    scanf("%d %d", &num1, &num2);
    
    return 0;
}