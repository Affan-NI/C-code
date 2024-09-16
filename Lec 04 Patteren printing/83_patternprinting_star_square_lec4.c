#include<stdio.h>
int main(){
    int n;
    printf("Enter no of rows ");
    scanf("%d",&n);
     int m;
    printf("Enter no of columns  ");
    scanf("%d",&m);
    for(int i=1; i<=n; i++){       // outer loop -> no. of line
        for(int i=1; i<=m; i++){   //inner loopn -> no of star in each line
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}