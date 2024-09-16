#include<stdio.h>
int main(){
    int r;
    printf("Enter no of rows=");
    scanf("%d",&r);
    int c;
    printf("Enter no of columns=");
    scanf("%d",&c);
    
    
    int arr[r][c];
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            scanf("%d",&arr[i][j]);
        }        
    }
    
    int sum=0;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            sum=sum+arr[i][j];
        }
               
    }
    printf("sum of matrix elemnt = %d",sum);

    return 0;
}