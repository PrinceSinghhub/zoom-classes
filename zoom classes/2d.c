// datatype name[row][collom]
#include<stdio.h>
int main(){
    int pr[2][4] = {{1,2,3,4},{5,6,7,8}};
    // for(int i = 0;i<2;i++){
    //     for(int j =0;j<4;j++){
    //         printf("Enter your element [%d][%d ]= ", i, j);
    //         scanf("%d", &pr[i][j]);
    //     }
    // }
    for(int i = 0;i<2;i++){
        for(int j =0;j<4;j++){
            printf("Enter your element [%d][%d]  = %d\n", i,j,pr[i][j]);
            
        }
    }
return 0;
}
// hw
// while or do while 1d, 2d
// dtype = float;
// using function