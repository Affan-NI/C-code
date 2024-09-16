#include<stdio.h>
int main(){
// star ka tringle print karo.
    int n;
    printf("Enter a no. ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}