// given an array, move all 0's to end while the non zero element remainse in same order.
#include<stdio.h>
int main(){
    int arr[9]={5,0,2,0,0,4,1,3,0};
    int n=9;
    int ans[n];
    int idx=0;
    int idx1=n-1;
    for(int i=0; i<n; i++){
        if(arr[i]!=0){
            ans[idx]=arr[i];
            idx++;
        }
        else{
            ans[idx1]=arr[i];
            idx1--;
        }
    }
    for(int i=0; i<n; i++){
        printf("%d ",ans[i]);
    }
    return 0;
}