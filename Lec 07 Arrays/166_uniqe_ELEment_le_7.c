// array me reapeted element hai jo uniqe hai unhe find karna hai.
#include<stdio.h>
#include<stdbool.h>
int main(){   
    int arr[7]={2,2,3,6,1,6,2};   
    for(int i=0; i<=6; i++){
       bool flag=false;
       for(int j=0; j<=6; j++){
        if(arr[i]==arr[j] && i!=j){
        flag=true;
        break;
        }
        }
        if(flag==false){
            printf("%d\n",arr[i]);
            // break;
        }
    }     
    return 0;
}