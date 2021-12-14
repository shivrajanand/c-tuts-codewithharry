#include <stdio.h>

int main(int argc, char const *argv[])
{
    for (int i=0; i<=10; i++ ){
        if (i == 5)
        {
            // break;
            continue;
        }
        printf("%d sqaure is %d\n", i, i*i);
        
    }
    return 0;
}
