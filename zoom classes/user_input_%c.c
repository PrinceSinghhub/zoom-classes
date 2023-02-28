#include<stdio.h>
#include<string.h>
void chara(){
    char pr[5];
    char a;
    int x=0;
    char b = '\0';
    while(x<5){    
       fflush(stdin);
       printf("Enter char: ");
       scanf("%c",&a);
       pr[x] = a;
       x++;
    }
    pr[5]+=b;
    printf("take input by char: %s\n",pr);
}
void string(){
    char pr1[5];
    printf("Enter Your String: ");
    scanf("%s",&pr1);
    printf("take input by string: %s\n",pr1);
}
int main(){
    chara();
    string();
return 0;
}