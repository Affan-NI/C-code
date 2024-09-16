#include<stdio.h>
int main(){
    char arr[5]={'a','t','b','\0','v'}; // \0->null charctor yhe print nhi hota.
    // printf("%c",arr[3]); 
    for(int i=0; i<5; i++){
        printf("%c",arr[i]);
    }
    // ascII valu of \0
    printf("\n%d",arr[3]);
    return 0;
}