#include <stdio.h>
#include <string.h>

struct student {
    int id;
    int age;
    char name[30];
};

int main()
{
    struct student s1;
    
    s1.id = 101;
    s1.age = 16;
    // s1.name = "Rahul"; -- results in error, use strcpy() function instead
    strcpy(s1.name, "Rahul");
    
    //defining another structure
    struct student s2;
    s2.id = 102;
    s2.age = 17;
    strcpy(s2.name, "Ankita");
    
    printf("Id, name and Age of student 1 is %d, %s and %d \n", s1.id, s1.name, s1.age);
    printf("Id, name and Age of student 2 is %d, %s and %d", s2.id, s2.name, s2.age);
	
    return 0;
}
