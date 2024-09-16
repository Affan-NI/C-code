// print matrix's row no. which has max sum.
#include<stdio.h>
#include<limits.h>
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
    int maxsum=INT_MIN;
    int row=0;
    for(int i=0; i<r; i++){
        int sum=0;
        for(int j=0; j<c; j++){           
            sum=sum+arr[i][j];          
        }
         printf("sum of %d row is %d\n",i+1,sum);
         if(maxsum<sum){
            maxsum=sum;
            row++;
         }
    }
    printf("maximum sum of one row is %d this row no. is %d",maxsum,row);                       
    return 0;
}