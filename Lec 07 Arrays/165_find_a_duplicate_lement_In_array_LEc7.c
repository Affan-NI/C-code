#include<stdio.h>
int main(){
    int arr[7]={2,2,5,4,1,7,7};   
    for(int i=0; i<=6; i++){
       for(int j=i+1; j<=6; j++){
        if(arr[i]==arr[j]){
        printf("%d\n",arr[i]);
        break;
        }
       }
    
    }

    return 0;
}