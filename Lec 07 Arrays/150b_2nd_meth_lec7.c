#include<stdio.h>
#include<limits.h>
int main(){
    int ar[7]={2,4,-7,9,4,6,5};
    int minimum=INT_MAX;
    for(int i=1; i<=6; i++){
        if(minimum>ar[i]){
            minimum=ar[i];
        }
    }
    printf("minimum value element %d",minimum);
    return 0;
}