#include<stdio.h>
#include<string.h>
int main(){
    char *p = "codex";
    char *p1;
    p1 = strdup(p);
    printf("%p\n",p);
    printf("%p\n",p1);
    printf("%s",p1);

    
return 0;
}

// strdup