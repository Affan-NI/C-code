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
    int sum=0;
    for(int i=0; i<=n-1; i++){
        sum=sum+ar[i];
    }
    printf("\nSum of array element is= %d",sum);
    return 0;
}