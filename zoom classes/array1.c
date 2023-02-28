// syntax of 1d array
// datatype name[size];
// #include<stdio.h>
// int main(){
//     // in this ,methode depend lenth
//     int codex[6] = {1,2,3,4,5,6};

//     printf("%d",codex[4]);

// return 0;
// }
// syntax of 2d array
// datatype name[row][collom];
//  example = pr[3][2]
// [1,2]
// [3,4]
// [5,6]
#include <stdio.h>
int main()
{
    int pr[2][3];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            printf("Enter your element %d,%d = ", i, j);
            scanf("%d", &pr[i][j]);
        }
    }
    printf("\n");
    // excessing element
    for(int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            printf("Enter your element %d,%d = %d\n", i, j, pr[i][j]);
        }
    }

    return 0;
}