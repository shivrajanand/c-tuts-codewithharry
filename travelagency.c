#include <stdio.h>
#include <string.h>

void clear()
{
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
}

struct driver
{
    char id[11];
    char name[101];
    char dlno[51];
    char route[101];
    int kms;
} d1, d2, d3;

int main(int argc, char const *argv[])
{

    strcpy(d1.id, "d1");
    strcpy(d2.id, "d2");
    strcpy(d3.id, "d3");
    // printf("%s, %s, %s\n", d1.id, d2.id, d3.id);

    printf("Enter driver data for driver %s \n\n", d1.id);
    printf("Enter name of Driver\n");
    scanf("%s", &d1.name);
    printf("Enter dl number of Driver\n");
    scanf("%s", &d1.dlno);
    printf("Enter route of Driver\n");
    scanf("%s", &d1.route);
    printf("Enter kms travelled by Driver\n");
    scanf("%d", &d1.kms);
    printf("Driver data input for %s successfull\n\n\n", d1.id);

    printf("Enter driver data for driver %s \n\n", d2.id);
    printf("Enter name of Driver\n");
    scanf("%s", &d2.name);
    printf("Enter dl number of Driver\n");
    scanf("%s", &d2.dlno);
    printf("Enter route of Driver\n");
    scanf("%s", &d2.route);
    printf("Enter kms travelled by Driver\n");
    scanf("%d", &d2.kms);
    printf("Driver data input for %s successfull\n\n\n", d2.id);

    printf("Enter driver data for driver %s \n\n", d3.id);
    printf("Enter name of Driver\n");
    scanf("%s", &d3.name);
    printf("Enter dl number of Driver\n");
    scanf("%s", &d3.dlno);
    printf("Enter route of Driver\n");
    scanf("%s", &d3.route);
    printf("Enter kms travelled by Driver\n");
    scanf("%d", &d3.kms);
    printf("Driver data input for %s successfull\n\n\n", d3.id);

    clear();

    printf("Name of driver %s is %s\n", d1.id, d1.name);
    printf("Driving license number of driver %s is %s\n", d1.id, d1.dlno);
    printf("Route of driver %s is %s\n", d1.id, d1.route);
    printf("kms travelled by driver %s is %d\n", d1.id, d1.kms);
    printf("\n");
    printf("Name of driver %s is %s\n", d2.id, d2.name);
    printf("Driving license number of driver %s is %s\n", d2.id, d2.dlno);
    printf("Route of driver %s is %s\n", d2.id, d2.route);
    printf("kms travelled by driver %s is %d\n", d2.id, d2.kms);
    printf("\n");
    printf("Name of driver %s is %s\n", d3.id, d3.name);
    printf("Driving license number of driver %s is %s\n", d3.id, d3.dlno);
    printf("Route of driver %s is %s\n", d3.id, d3.route);
    printf("kms travelled by driver %s is %d\n", d3.id, d3.kms);

    return 0;
}
