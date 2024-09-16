#include<Stdio.h>
int main(){
    int n;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int ar[n];
    for(int i=0; i<=n-1; i++){
        printf("Enter %d elemnt of array: ",i+1);
        scanf("%d",&ar[i]);
    }
    for(int i=0; i<=n-1; i++){
        printf("%d ",ar[i]);
    }
    int product=1;
    for(int i=0; i<=n-1; i++){
        product=product*ar[i];
    }
    printf("\nproduct of array element is= %d",product);
    return 0;
}