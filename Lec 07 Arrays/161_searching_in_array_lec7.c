#include<stdio.h>
// given an array & a number x.Find out if x lies in the array or not,if yes then print he index.
int main(){
    int arr[7]={1,2,3,4,5,4,7};
    int x=4;
    for(int i=0; i<=6; i++){
        if(arr[i]==x){
            printf("%d is persent in the array and it's index is %d\n",x,i);
            break;
        }
    }
// if last vale 4 ka index print karna hai.
    // for(int i=6; i>=0; i--){
    //     if(arr[i]==x){
    //         printf("%d is persent in the array and it's index is %d\n",x,i);
    //         break;
    //     }
    // }
    return 0;
}