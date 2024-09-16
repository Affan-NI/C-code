#include<stdio.h>
void revers(int arr[], int si, int ei){
    for(int i=si, j=ei; i<j; i++,j--){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    return;
}
int main(){
    int n;
    printf("Enter no. of element =  ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<=n-1; i++) scanf("%d",&arr[i]);
    for(int i=0; i<=n-1; i++) printf("%d,",arr[i]);
    int k;   
    printf("\nArray rotate by step = ");
    scanf("%d",&k);
    k=k%n;
    revers(arr,0,n-1);
    revers(arr,0,k-1);
    revers(arr,k,n-1);
    for(int i=0; i<=n-1; i++ ) printf("%d,",arr[i]); 
    return 0;
}