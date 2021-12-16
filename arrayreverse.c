#include <stdio.h>
#include <string.h>
void printlist(int list[], int len){
    printf("{ ");
    for (int i = 0; i < len; i++)
    {
        printf("%d, ", list[i]);
    }
    printf("}");
    
}


void reversearray(int arr[], int len){

    // int len = sizeof(arr)/sizeof(arr[0]);
    int revlist[len];
    // printf("%d \n", len); 

    for (int i = 0; i < len; i++)
    {
       revlist[i] = arr[len-1-i] ;
    }

    printlist(revlist, len);
       
}

int main(int argc, char const *argv[])
{
    int myarr[] = {1, 2 ,3, 4, 5, 6, 7, 8, 9, 0};
    
    // int len = sizeof(myarr)/sizeof(myarr[0]);
    // printf("%d", len);

    // reversearray(myarr);
    int len = sizeof(myarr)/sizeof(myarr[0]);
    // printf("%d", len);

    reversearray(myarr, len);
    return 0;
}

