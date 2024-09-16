#include<stdio.h>
int main(){
    int n;
    printf("Enter a no. ");
    scanf("%d",&n);
    // yha only n-> odd no. hi lega tabhi plus banaga.
    for(int i=1; i<=n; i++){ 
        for(int j=1; j<=n; j++){
            if(j==n/2+1 || i==n/2+1)
            printf("* ");
            else
            printf("  ");
        }
        printf("\n");
    }
    return 0;
}

