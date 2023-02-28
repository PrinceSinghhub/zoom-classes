// poiner to pointer to pointer is called triple pointer
#include<stdio.h>
int main(){
    int a=10;
    int *k;
    int **j;
    int ***p;
    k=&a;
    j=&k;
    p=&j;
    printf("the value of a is = %d\n",a);
    printf("the value of a by *k is = %d\n",*k);
    printf("the value of a by **j is = %d\n",**j);
    printf("the value of a by ***p is = %d\n",***p);
    // addressin
    printf("the add of a is = %p\n",&a);
    printf("the add of a in k is  = %p\n",k);
    printf("the add of k is = %p\n",&k);
    printf("the add of k in j is = %p\n",j);
    printf("the add of j is = %p\n",&j);
    printf("the add of j in p = %p\n",p);
    printf("the add of p is = %p\n",&p);

return 0;
}