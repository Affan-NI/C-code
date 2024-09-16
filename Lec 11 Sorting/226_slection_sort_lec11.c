// sort the array with the help of slection sort.
#include<stdio.h>
#include<limits.h>
int main(){
    int arr[7]={7,4,5,9,8,2,1};
    int n=7;
    printf("unsorted array \n");
    for(int i=0; i<n; i++){
         printf("%d ",arr[i]);
    }

// slection sort
    for(int i=0; i<n-1; i++){
        int min=INT_MAX;      
        int minidx=-1;         // chuki -1 index hota hi nhi islia mana.
        for(int j=i; j<=n-1; j++){  // to find minimum element in array
            if(min>arr[j]){
                min=arr[j];
                minidx=j;
            } 
        }
        int temp=arr[minidx];   //swap the min and first element of unsorted part
        arr[minidx]=arr[i];     //swap minidx and i
        arr[i]=temp;
    }
    printf("\n");
    printf("Sorted array \n");
    for(int i=0; i<n; i++){
         printf("%d ",arr[i]);
    }

    return 0;
}