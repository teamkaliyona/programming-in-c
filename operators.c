#include <stdio.h>

int main()
{
    int num1= 10;
    int num2 = 5;
    
    int res;
    
    //Arithemetic Operators
    // res = num1 + num2;
    // printf("Addition result is %d", res);
    
    printf("Addition result is %d\n", num1 + num2);
    printf("Subtraction result is %d\n", num1 - num2);
    printf("Multiplication result is %d\n", num1 * num2);
    printf("Division result is %d\n", num1 / num2);
    printf("Remainder value is %d\n", num1 % num2);
    printf("Incrementing num1 %d\n", ++num1);
    printf("Decrementing num2 %d\n", --num2);
    
    //Comparison Operators
    printf("Are numbers equal %d\n", num1 == num2);
    printf("Are numbers not equal %d\n", num1 != num2);
    printf("num1 is greater than or equal to num2 %d\n", num1 >= num2);
    printf("num1 is lesser than or equal to num2 %d\n", num1 <= num2);
    
    //Logical Operators
    /*
    Logical AND
    true - false = false
    false - true = false
    false - false = false
    true - true = true
    */
    
    res = (num1 > 0) && (num1 > num2);
    printf("AND result is %d\n", res);

    /*
    Logical OR
    false - false = false
    true - false = true
    false - true = true
    true - true = true
    */
    res = (num1 < 0) || (num1 < num2);
    printf("OR result is %d\n", res);
    
    /*
    Logical not
    true = false
    false = true
    */
    res = !(num1 > num2);
    printf("Logical NOT result is %d", res);
    
    return 0;
}
