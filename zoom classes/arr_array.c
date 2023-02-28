//  ++ -- + - a=10 a++
#include <stdio.h>
int main()
{ 
    int a=20;
    int *pr;
    pr=&a;
    char a1= 'a';
    char *aj;
    aj = &a1;
    // a++ 
    // ++a
    // a=30
    // a=31
    // b=1004;
    // b=400;
    // *pr=a;
    // pr++
    // ad=1000
    // ad++;
    // ad=1004
    // int = 4 bit
    printf("%d\n",&a);
    printf("%d\n",pr);
    printf("%d\n",++pr);
    printf("%d\n",&pr);
    printf("\n");
    printf("%d\n",&a1);
    printf("%d\n",aj);
    printf("%d\n",--aj);
    printf("%d\n",&aj);
    
    // printf("%d",d1);
    
    // printf("%d",swap(&x,&y));
    
    return 0;
}