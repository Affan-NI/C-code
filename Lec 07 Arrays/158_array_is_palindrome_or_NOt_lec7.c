#include<stdio.h>
void palindrom(int arr[],int n){
    int a=0, i=0, j=n-1;
    while(i<=j){
        if(arr[i]==arr[j]) a=1;           
        else {
            a=0;
            break;
        }
        i++;
        j--;
    }
    if(a==1) printf("\nArray is palindrome");
    else printf("\nArray is not palindrome");
    return;   
}
int main(){
    int n;
    printf("Enter no. of element = ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<=n-1; i++) scanf("%d,",&arr[i]);
    for(int i=0; i<=n-1; i++) printf("%d,",arr[i]);
    palindrom(arr,n);
    return 0;
}