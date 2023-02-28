#include<stdio.h>
#include<string.h>
int main(){
    char aj[] = "AJEET";
    char k[] = "khushi";
    char kj[30];
    printf("the concate of aj and k: %s\n",strcat(aj,k));
    printf("the len of aj: %d\n",strlen(aj));
    printf("the len of k: %d\n",strlen(k));
    printf("the reverse of k: %s\n",strrev(k));
    strcpy(kj,aj);
    printf("the copy string aj in kj: %s\n",kj);
    printf("the lower string aj: %s\n",strlwr(aj));
    printf("the upeer string k: %s\n",strupr(k));
    
return 0;
}
