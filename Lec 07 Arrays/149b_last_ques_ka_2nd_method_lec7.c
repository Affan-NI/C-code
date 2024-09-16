// #include<stdio.h>
// #include<limits.h>
// int main(){
    
//     int max=INT_MIN;
//     printf("%d",max);
    
//     return 0;
// }

#include<stdio.h>
#include<limits.h>
int main(){
    int ar[7]={2,4,1,0,4,6,5};
    int max=INT_MIN;    // sabse chota number. of int that can be store.
    for(int i=1; i<=6; i++){
        if(max<ar[i]){
            max=ar[i];
        }
    }
    printf("max value element %d",max);
    return 0;
}