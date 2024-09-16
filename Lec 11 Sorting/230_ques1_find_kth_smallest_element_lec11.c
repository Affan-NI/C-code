// given an integer array an integer k in array, k<=size of array,then find kth smallest element find karo.
#include<stdio.h>
#include<limits.h>
int main(){
    int arr[5]={5,2,1,3,4};
    int n=5; //size of array
    int k=3; // array ka teesra smallest element batao. (i.e.=3 )

// 01 meyhod->
// first of all sort the array then print arr[3].

// 02 method-> by selection sort
for(int i=0; i<=k-1; i++){     //i<=k-1 means 3 pass me kaam chal jayga.
    int min=INT_MAX;
    int idx=-1;
    for(int j=i; j<n; j++){
        if(min>arr[j]){
            min=arr[j];
            idx=j;
        }
    }
    int temp=arr[idx];
    arr[idx]=arr[i];
    arr[i]=temp;
}
printf("%d ",arr[k-1]);
    return 0;
}