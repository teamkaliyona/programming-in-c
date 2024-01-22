#include <stdio.h>

//void return type does not return anything
void printMessage(char name[]);

//function with parameters and returning value
int add(int a, int b){
    return a+b;
}

//recursive function
/*
    sum(9);
    9 + sum(8)
    9 + 8 + sum(7)
    9 + 8 + 7 + sum(6)
    ....
*/
int sumOfseries(int n){
    if(n > 0){
        return n + sumOfseries(n-1);
    } else {
        return 0;
    }
}

int main()
{
    printMessage("Rahul");
    printf("\nSum of 5 and 4 is %d", add(5,4));
    printf("\nSum of 15 and 14 is %d", add(15,14));
    printf("\nSum of 30 and 40 is %d", add(30,40));
    printf("\n\n");
    printf("Sum of series until 9 is %d", sumOfseries(9));
    return 0;
}

void printMessage(char name[]){
    printf("Namaskara %s", name);
}
