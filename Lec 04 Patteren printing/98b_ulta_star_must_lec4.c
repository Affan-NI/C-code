#include<stdio.h>
int main(){
    int n;
    printf("Enter a no ");
    scanf("%d",&n); 
    int nsp=0;
    int nst=n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=nsp; j++){
            printf(" ");
        }
        nsp++;
        for(int k=1; k<=nst; k++){
            printf("*");
        }
        nst--;
        printf("\n");
    }
    return 0;
}