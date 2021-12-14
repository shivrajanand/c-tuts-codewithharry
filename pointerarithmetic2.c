#include <stdio.h>

int main(int argc, char const *argv[])
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int len_arr = sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i < len_arr; i++)
    {
        printf("[%d : %d]\n", arr[i], &arr[i]);
    }

    for (int i = 0; i < len_arr-1; i++)
    {
        printf("%d, ", arr[i]);
    }
    
    
    return 0;
}
