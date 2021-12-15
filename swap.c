#include <stdio.h>

// function to swap the values/
void swap(int *x, int *y){
    int temp;
    temp = *x; /* saves the value at addres x */
    *x = *y; /* put y into x*/
    *y = temp; /* put temp into y */ 

    /*temo first stores x then x stores y and y stores temp thats is x*/

}

int main(int argc, char const *argv[])
{
    int a = 34, b=74;
    printf("%d and %d \n",a,b);
    swap(&a, &b);
    printf("%d and %d \n",a,b);
    return 0;
}
