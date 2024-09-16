#include<stdio.h>
int main(){
    int n;
    printf("Enter a no ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            printf(" ");
        }
        for(int k=1; k<=i; k++){
            int a=k+64;
            char ch=(char)a;
            printf("%c",ch);
        }
        printf("\n");
    }
    return 0;
}