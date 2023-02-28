#include<stdio.h>
int main(){
    int arr1[2][5] = {{1,2,3,4,5},
                      {6,7,8,9,10}};
    int (*ptr)[5] = arr1;
    for(int i = 0;i<2;i++){
        for(int j = 0;j<5;j++){
            printf("the value is [%d] [%d]: %d\n",i,j,*(*(ptr+i)+j));
            printf("address is %d\n",&*(*(ptr+i)+j));
        }
    }
    printf("Base address is : %u\n",ptr);
    printf("2 Base address is : %u\n",ptr+1);
return 0;
}