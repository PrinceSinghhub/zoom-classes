#include <stdio.h>
int main(){   
    int n;
    printf("Enter Range: ");
    scanf("%d",&n);
    int arr[n];
    int so[n];
    for(int i = 0;i<n;i++){
        printf("Enter your element:");
        scanf("%d",&arr[i]);
    }

    for(int i = 0;i<n;i++){
        printf("your element: %d\n",arr[i]);
    }
    int temp=0,temp1=0;
    for(int a = 0;a<n;a++){
        for(int b = 0;b<n;b++){
        
           if(arr[b] > arr[b+1]){
            //  temp = arr[b];
             so[b] = arr[b+1];
             so[b+1]=arr[b];
           
           }
        }
    }
    printf("the sorted arry is:\n");
    // for(int i = 0;i<n;i++){
    //     so[i] = temp1;
    //     // so[i+1] = temp;
    // }

    for(int i = 0;i<n;i++){
        printf("your element: %d\n",so[i]);
    }
   
    

    return 0;
}
