// 2d array ko transpose me convert karo (ek array ke transpose ko use array se replace karo).
// use square matrix.
#include<stdio.h>
int main(){
    int n;
    printf("Enter order of squer matrix =");
    scanf("%d",&n);    
    printf("ENter matrix\n");        
    int arr[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d",&arr[i][j]);
        }        
    }
    printf("\n");    
    for(int i=0; i<n; i++){         // i-> 0 to n-1
        for(int j=i; j<n; j++){     // j-> i to n-1 OR 0 to i
           int temp=arr[i][j];
           arr[i][j]=arr[j][i];
           arr[j][i]=temp;
        }
                        
    }   
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }           
        return 0;
}