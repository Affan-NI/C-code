#include<stdio.h>
int main(){
    int arr[3][3]={1,9,3,4,5,6,7,8,2};
    int max=arr[0][0];
    int a=-1, b=-1;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(max<arr[i][j]){
                 max=arr[i][j];
                 a=i, b=j;
            }            
        }
    }
    printf("maximum element is %d and its index is (%d, %d)",max,a,b);       
    return 0;
}