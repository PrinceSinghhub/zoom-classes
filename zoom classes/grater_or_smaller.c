#include<stdio.h>
int main(){
    
    int k[5], total;
    for(int i=0; i<5; i++){
        printf("Enter Element = ");
        scanf("%d", &k[i]);
        
    }

    int max=k[0],min=k[0];
    for(int x = 0; x<5; x++){
        if (k[x]>max){
            max=k[x];
        }
        else if(k[x]<min){
            min=k[x];
        }
            
            }
    printf("Maximum : %d\n",max);
    printf("Minimum : %d\n",min);
    
    return 0;
}