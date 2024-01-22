#include <stdio.h>

//call by value
void swap(int x, int y){
    int t= x;
    x=y;
    y=t;
    printf("Swapped integers are %d and %d\n", x,y);
}

//call by reference
void swapByReference(int *x, int *y){
    int t= *x;
    *x = *y;
    *y = t;
    printf("Swapped integers are %d and %d\n", *x,*y);
}

int main() {
    
    int age = 20;
    int* ptr = &age; //stores address of age
    int **pptr = &ptr; //stores address of ptr
    
    printf("Value of age is %d", age);
    printf("\nAddress of age is %p", ptr);
    
    printf("\nValue of age using pointer is %d", *ptr);
    printf("\nAddress of pointer variable is %p", &ptr);
    
    printf("\nValue of age using double pointers is %d", **pptr);
    
    int a = 5, b=10;
    swap(a,b);
    printf("Values are now %d and %d\n", a,b); //numbers are not swapped
    
    swapByReference(&a,&b);
    printf("Values are now %d and %d\n", a,b); //numbers are swapped
    
    return 0;
}