// Array sort karo in increasing order.
#include<stdio.h>
int main(){
    int arr[5]={5,4,3,2,1};
    int n=5; // n=size of array.
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
// Bubble sort->
    for(int i=0; i<n-1; i++){ // max n-1 baar loop chlega chuki jitne size hota hai usse ek kam pass karte hai
        for(int j=0; j<n-1-i; j++){   // chuki last element j+1 me count hoga. yha ese bhi likh sakye hai j<n-1 isse loop 
        if(arr[j]>arr[j+1]){     // har baar end tak jayga. isliay i ka use kiya choki 1 pass me max element last me pahuch jata hai.
        int temp =arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
        }
    }
    printf("\n");
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}