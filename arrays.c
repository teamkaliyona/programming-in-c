#include <stdio.h>

int main()
{
    // int num1 = 5;
    // int num2 = 10;
    // int num3 = 15;
    // int num4 = 20;
    // int num5 = 25;
    
    //declaring arrays and accessing its elements
    int nums[5];
    nums[0] = 5; //index starts with zero
    nums[1] = 10;
    nums[2] = 15;
    nums[3] = 20;
    nums[4] = 25;
    
    //declaration with initialisation
    int nums[5] = {5, 10, 15, 20, 25};
    
    //input and output with arrays
    int nums[5], i;
    printf("Enter first number : ");
    scanf("%d", &nums[0]);
    printf("\nEnter second number : ");
    scanf("%d", &nums[1]);
    printf("\nEnter third number : ");
    scanf("%d", &nums[2]);
    printf("\nEnter fourth number : ");
    scanf("%d", &nums[3]);
    printf("\nEnter fifth number : ");
    scanf("%d", &nums[4]);
    
    printf("\nArray elements are: \n");
    printf("%d\n", nums[0]);
    printf("%d\n", nums[1]);
    printf("%d\n", nums[2]);
    printf("%d\n", nums[3]);
    printf("%d\n", nums[4]);
    
    //using for loop
    printf("Enter 5 numbers: ");
    for(i=0; i<5; i++){
        scanf("%d", &nums[i]);
    }
    
    printf("Array Elements are : ");
    for(i=0;i<5;i++){
        printf("%d\t", nums[i]);
    }
    return 0;
}
