#include<stdio.h>
int main(){
    int r;
    printf("Enter no of rows=");
    scanf("%d",&r);
    int c;
    printf("Enter no of columns=");
    scanf("%d",&c);
    printf("ENter matrix\n");        
    int arr[r][c];
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            scanf("%d",&arr[i][j]);
        }        
    }
    int x1,y1;    
    printf("Enter c0ordinate of staring point ");
    scanf("%d%d",&x1,&y1); 
    int x2,y2;    
    printf("Enter c0ordinate of ending point ");
    scanf("%d%d",&x2,&y2);    
    int sum=0;
    for(int i=x1; i<=x2; i++){
        for(int j=y1; j<=y2; j++){
            sum=sum+arr[i][j];
        }
               
    }
    printf("sum of subset of matrix elemnt = %d",sum);

    return 0;
}