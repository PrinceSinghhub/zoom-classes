#include<stdio.h>
#include<string.h>
int main(){
      char a[] = "ajeet kumar";
      char b[] = "aj eetkumar";
      int x=0;
      int y = 0;
      int r1 = 0, r2 = 0;
      for(int i =0;a[i]!='\0';i++){
              r1++;
      }
      for(int i =0;b[i]!='\0';i++){
              r2++;
      }
      if (r1 == r2){
        while(x<r1){
        if(a[x] && b[x] != ' '){
           if(a[x] == b[x]){
               y++;
               x++;
           }
        }
        else if(a[x] && b[x] == ' '){
               y++;
               x++;
        }
        
        else{
            printf("String are Not Matched\n");
        }
        
      }
      }
    else{
        printf("String are Not Matched\n");
    }
      
    if(y == r1){
        printf("String are Matched\n");
    }
    
      printf("%d\n",r1);
      printf("%d",r2);
        
return 0;
}