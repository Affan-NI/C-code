#include<stdio.h>
int main(){
    int n;
    printf("Enter a no.");
    scanf("%d",&n);
    int a=n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=a; j++){
            printf("%d ",j);
        }
        a--;
        printf("\n");
    }

    return 0;
}