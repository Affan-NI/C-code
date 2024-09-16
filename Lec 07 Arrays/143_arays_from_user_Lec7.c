#include<stdio.h>
int main(){
    int a[5];
    for(int i=0; i<=4; i++){
        printf("Enter %d no. ", i+1);
        scanf(" %d",&a[i]);
    }
    for(int i=0; i<=4; i++){
        printf("%d ",a[i]);
    }
    return 0;

}