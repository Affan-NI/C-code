#include<stdio.h>
int main(){
    int ar[7]={2,4,1,0,4,6,5};
    int max=ar[0];
    for(int i=1; i<=6; i++){
        if(max<ar[i]){
            max=ar[i];
        }
    }
    printf("max value element %d",max);
    return 0;
}