#include<stdio.h>
int main(){
    float k[5], total;
    for(int i=0; i<5; i++){
        printf("Enter marks = ");
        scanf("%f", &k[i]);
    }
    float a=0;
    for (int j=0; j<5; j++){
        a=a+k[j];
    }

    float b=0;
    b = a/5.0;
    printf("Your Marks is : %0.2f\n", a);
    printf("Your Percentage is : %0.1f\n", b);

    if (b>=90 && b<=100){
        printf("CONGRATULATION, you got A grade");
    }

    else if(b> 80 && b<=89){
        printf("CONGRATULATION, you got B grade");
    }

    else if(b> 70 && b<=80){
        printf("CONGRATULATION, you got C grade");
    }

      else if(b> 60 && b<=70){
        printf("CONGRATULATION, you got D grade");
    }

      else if(b> 50 && b<=60){
        printf("CONGRATULATION, you got E grade");
    }

return 0;
}
