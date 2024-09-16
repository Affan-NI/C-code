// Find two no. their sum equal to taget element when array is sorthed.
#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,5,8,9,10};
    int target=8;
    // 2 pointer system->
    int i=0;
    int j=7;    //size-1;
    while(i<j){
        if(arr[i]+arr[j]==target){
            printf("two no. are %d, %d",arr[i],arr[j]);
            break;
        }
        if(arr[i]+arr[j]>target) j--;    //to deacrese the sum.  because array in incresing order.
        if(arr[i]+arr[j]<target)i++;  // to increas the sum.
    }

    return 0;
}