#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num;
    for (int i = 0; i <= 10; i++)
    {
        printf("This is parent for-loop iteration i-value = %d \n", i);
        
        for (int j = 0; j < 5; j++)
        {
            printf("This is child for-loop iteration ij-value = %d %d \n",i,j);
            printf("Enter 0 to exit or any other number to continue\n");
            scanf("%d", &num);

            if (num == 0)
            {
                goto end;
            }
            
        }
        
    }
    end:
        printf("We have exited the parent loop");
    
    return 0;
}
