// given an array, move all 0's to end while the non zero element remainse in same order.
// without using any extra array
#include<stdio.h>
int main(){
    int arr[9]={5,0,2,0,0,4,1,3,0};
    int n=9;
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
// pushing 0 in same place
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1-i; j++){
            if(arr[j]==0){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;

            }
        }
    }
    printf("\n");
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}