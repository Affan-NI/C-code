#include<stdio.h>
int main(){
    
    char str[20]="collegewallah"; // isme 14 element hai.
    int i=0;
    while(str[i]!='\0'){
        printf("%c",str[i]);
        i++;
    }
    printf("\n");
    str[1]=97; 
    // ya
    //  str[1]='a';
     i=0;
    while(str[i]!='\0'){
        printf("%c",str[i]);
        i++;
    }
    return 0;
}