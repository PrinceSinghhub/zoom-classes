#include<stdio.h>
int main(){
    int a=100;
    // pointer inilisation / poimter to pointer to ppointer  also triple pointer
    int *aj;
    aj=&a;
    int *kj=NULL;
    printf("Enter you command = ");
    int z;
    scanf("%d",&z);
    if(z==10){
        int *kj;
        int u=600;
        kj=&u;
        printf("the value of u is = %d\n",*kj);
        
    }
   
    else{
        printf("the value of a is = %d\n",a);
        printf("the value of a by *aj is = %d\n",*aj);
        printf("the value of **kj is = %d\n",kj);
    }
    
    // adrees %u=unsi. int %x hexa adrees %p int addre
    // printf("the add of a is = %p\n",&a);
    // printf("the add of a in aj is  = %p\n",aj);
    

return 0;
}