#include <stdio.h>

int main(){
    int marks;
    printf("Enter student marks ");
    scanf("%d", &marks);
    
    if(marks > 35){
        printf("Pass");
		if(marks > 90) {
			printf(" With Distinction");
		}
    } else {
        printf("Fail");
    }
    
    if(marks > 80){
        printf("Grade is A+");
    } else if(marks > 70){
        printf("Grade is A");
    } else if(marks > 60){
        printf("Grade is B+");
    } else if(marks > 50){
        printf("Grade is B");
    } else if(marks > 35) {
        printf("Grade is C");
    } else {
        printf("Fail");
    }
    
    switch(marks/10){
        case 9: printf("Grade is A++");
                  break;
        case 8: printf("Grade is A+");
                  break;
        case 7: printf("Grade is A");
                  break;
        case 6: printf("Grade is B+");
                  break;
        case 5: printf("Grade is B");
                  break;
        case 4: printf("Grade is C");
                  break;
        default: printf("Fail");
    }
    
    
    return 0;
}