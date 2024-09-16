#include<stdio.h>
int main(){   
    int m;
    printf("Enter no of rows of  matrix =");
    scanf("%d",&m);
    int n;
    printf("Enter no of columns of  matrix =");
    scanf("%d",&n);
    printf("ENter  matrix\n");        
    int a[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            scanf("%d",&a[i][j]);
        }        
    }
    printf("\n");
    // wave print-2
    for(int j=0; j<n; j++){
        if(j%2==0){        
            for(int i=m-1; i>=0; i--){
            printf("%d ",a[i][j]);
            } 
        }
        else{
            for(int i=0; i<m; i++){
                printf("%d ",a[i][j]);
            }
        }
        printf("\n");
    }       
    return 0;
}