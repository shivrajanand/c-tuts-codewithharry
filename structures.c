#include <stdio.h>
#include <string.h>

struct student
{

    int roll;
    char name[200];
    float marks;
};
struct student shivraj, avinash, nikhil;

void printstrc(struct student var)
{
    printf(" \n\n\nContacting Database........ \n\n\n");
    printf(" Roll is: %d \n", var.roll);
    printf(" Name is: %s \n", var.name);
    printf(" Marks is: %f \n", var.marks);
}

int main(int argc, char const *argv[])
{
    char name1[100];
    shivraj.roll = 12;
    avinash.roll = 13;
    nikhil.roll = 14;

    char s[] = "Shivraj";
    strcpy(shivraj.name, s);
    char a[] = "Avinash";
    strcpy(avinash.name, a);
    char n[] = "Nikhil";
    strcpy(nikhil.name, n);

    shivraj.marks = 45;
    avinash.marks = 46;
    nikhil.marks = 47;

    printf("Enter Name of student whose record is needed\n...>  ");
    gets(name1);
    printf("\n Student name is: ");
    puts(name1);

    if (strcmp(name1, "shivraj") == 0)
    {
        printstrc(shivraj);
    }
    else if (strcmp(name1, "avinash") == 0)
    {
        printstrc(avinash);
    }
    else if (strcmp(name1, "nikhil") == 0)
    {
        printstrc(nikhil);
    }
    else
    {
        printf("Requested student not in our database !");
    }

    return 0;
}
