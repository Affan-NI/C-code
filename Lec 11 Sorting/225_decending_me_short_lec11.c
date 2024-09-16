// sort in decending order.
#include<stdio.h>
#include<stdbool.h>
int main(){
    int arr[5]={3,2,5,1,4};
    int n=5;
    for(int i=0; i<5; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    for(int i=0; i<n-1; i++){
        bool flage=true;
        for(int j=0; j<n-1-i; j++){
            if(arr[j]<arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                flage=false;
            }      
        }
        if(flage==true) break;
    }
    for(int i=0; i<5; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}