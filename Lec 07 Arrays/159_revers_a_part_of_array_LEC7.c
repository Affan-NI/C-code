#include<stdio.h>
void revers(int arr[], int si, int ei){ // revers part of array.    
    for(int i=si,j=ei; i<j; i++,j--){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
}
int main(){
    int arr[7]={1,2,3,4,5,6,7};
    revers(arr,0,4);
    // index 0-4 revers.
    for(int i=0; i<=6; i++){
        printf("%d,",arr[i]);
    }
    return 0;
}