#include<stdio.h>
int main(){
    int arr[8]={1,2,120,-504,50,93,-128,6};
    int max=arr[0];
    int semax=arr[0];
    for(int i=1; i<=7; i++){
        if(max<arr[i]) max=arr[i];
    }
    for(int j=1; j<=7; j++){
        if(semax<arr[j] && arr[j]!=max) semax=arr[j];
    }
    printf("second max elemnt = %d ",semax);
    return 0;
}