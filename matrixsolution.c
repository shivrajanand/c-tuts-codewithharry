#include <stdio.h>
// int onemaker(val){
//     return 1/val;

// }

void printer(int ar){
    for ( int row = 0; row < 3; row++)
    {
        printf("{");
        for (int col = 0; col < 3; col++)
        {
            printf("%d,", ar[row][col]);
        }
        printf("}\n");
}
int main(int argc, char const *argv[])
{

    int m[3][3] = { {-1, 1, 2},
                    {1, 2, 3},
                    {3, 1, 1}};

    printer(m);

    float rm[3][3];

    

    
        
    }
    
    return 0;
}
