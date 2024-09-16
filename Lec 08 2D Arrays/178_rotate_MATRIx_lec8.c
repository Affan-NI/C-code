// WAP to rotae a matrix 90 degree clockwise.

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
    // transpose   
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
    printf("\n");           
    // rotate
    for(int i=0; i<n; i++){
        int a=n;
        for(int j=0; j<n/2; j++){   // ek hi row ke element ko swap kara
            int tem=arr[i][j];
            arr[i][j]=arr[i][a-1];
            arr[i][a-1]=tem;
            a--;
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