#include<stdio.h>
// solve without 3rd aray.
int main(){
    int arr[2][2]={1,2,3,4};
    int brr[2][2]={1,2,3,4};
    
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            arr[i][j]=arr[i][j]+brr[i][j];
            printf("%d ",arr[i][j]);

        }
        printf("\n");
    }
    return 0;
}