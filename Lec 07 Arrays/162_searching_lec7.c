#include<stdio.h>
#include<stdbool.h>  // for bool data type.
// given an array & a number x.Find out if x lies in the array or not,if yes then print he index.
// hum pichle method me else ki conditin nhi lik pa rhai tha.
int main(){
    int arr[7]={1,2,3,4,5,4,7};
    int x=4;
    int index=-1;
    bool flag=false;
    for(int i=0; i<=6; i++){
        if(arr[i]==x){
            flag=true;
            index=i;
            break;
        }
    }
    if(flag==true) printf("%d is persent in array it's index is %d",x,index);
    else printf("%d is not persent  in array ",x);
    return 0;
}