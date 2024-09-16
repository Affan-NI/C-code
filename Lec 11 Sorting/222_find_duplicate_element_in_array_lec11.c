// Find duplicate element in array if size of array n+1.filled by 1 to n element.
#include<stdio.h>
int main(){
    int arr[11]={6,1,2,3,7,5,4,8,9,9,10};
    int sum=0;
    for(int i=0; i<11; i++){
        sum=sum+arr[i];
    }
    int sum2=10*11/2; // n(n+1)/2
    int duplicate=sum-sum2;
    printf("duplicate element in array is %d",duplicate);
    return 0;
}