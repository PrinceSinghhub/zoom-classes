#include<stdio.h>
int main(){
    char pr[] = "codex coder ajeet kumar";
    int r = 0;
    for(int i =0;pr[i]!='\0';i++){
        r++;
    }
    int a= 0;
    while(a<r){
        if(pr[a] != ' '){
            printf("%c",pr[a]);
            a++;
        }
        else if(pr[a]==' '){
            printf("%c",pr[a]);
            a++;
        }
    }
return 0;
}