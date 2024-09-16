#include<stdio.h>
int main(){
    int n;
    printf("Enter no of students=");
    scanf("%d",&n);
    // int s=4;
    
    int arr[n][4];
    for(int i=0; i<n; i++){
        for(int j=0; j<4; j++){
            scanf("%d",&arr[i][j]);
        }        
    }
    printf("\n");
    printf("r p c m \n");
    for(int i=0; i<n; i++){
        for(int j=0; j<4; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");        
    }
    return 0;
}