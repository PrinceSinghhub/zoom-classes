#include<stdio.h>
#include<string.h>
int main(){
    char a[] = "co dexcoder";
    char b[] = "codex coder";
    int r1=0,r2=0;
     for(int i =0;a[i]!='\0';i++){
              r1++;
      }
      for(int i =0;b[i]!='\0';i++){
              r2++;
      }
      int n=0;
      while(r1>n){
        if(a[n] !=' '){
          n++;
        }
      }
      printf("%d %d %d",r1,r2,n);
      
return 0;
}