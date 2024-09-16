#include<Stdio.h>
// count the no. of element in given array greater than a given no. x.
int main(){
    int arr[5]={1,2,3,4,5};
    int x=3;  //  given
    int count=0;
    for(int i=0; i<=4; i++){
        if(arr[i]>x)     count++;
    }
    printf("%d ",count);
    return 0;
}