#include<Stdio.h>
// if index of array is odd then multiply by 2 else is even then increament of 10.
int main(){
    int arr[5]={1,2,3,4,5};
    for(int i=0; i<=4; i++){
        if(i%2!=0) arr[i]=2*arr[i];                   
        else arr[i]=arr[i]+10;        
    }
    for(int i=0; i<=4; i++){
        printf("%d ",arr[i]); 
    }
    return 0;
}