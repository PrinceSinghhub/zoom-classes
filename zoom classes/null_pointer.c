#include<stdio.h>
int main(){
    int a=10;
    int *p;
    int **r;
    p=&a;
    r=&p;
    int *k=NULL;
    printf("the value of a is = %d\n",a);
    printf("the value of a by *k is = %d\n",*p);
    printf("the value of a by **j is = %d\n",**r);
    printf("the value of = %d\n",*k);
return 0;
}