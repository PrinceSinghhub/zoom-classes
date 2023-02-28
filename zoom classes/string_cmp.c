#include<stdio.h>
#include<string.h>
int main(){
     char st1[]= "ajeetkumar";
     char st2[]= "ajeet";
     int s = strcmp(st1,st2);
     if(s == 0){
         printf("string are same");
     }
     else if( s == 1){
         printf("string are not same and 1st string are gratter then second string");
     }
     else if( s == -1){
         printf("string are not same and 1st string are smaller then second string");
     }
return 0;
}