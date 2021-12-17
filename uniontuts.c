#include <stdio.h>
#include <string.h>

union student {
    int id;
    int marks;
    char name[100];
};


int main(int argc, char const *argv[])
{

    union student s1;

    s1.id = 12;
    s1.marks = 87;
    strcpy(s1.name, "Shivraj");

    printf("ID is %d \n", s1.id);
    printf("Marks is %d \n", s1.marks);
    printf("Name is %s \n", s1.name);

}
   
