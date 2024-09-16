// given an array filled by single digit no.then formed two minimum no. using of all array elements.after that find sum of them.
#include<stdio.h>
int main(){
    int n;
    printf("Enter size of array = ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elements ->\n");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
// step 01 -> short array in increasing order. to form minimum no.
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1-i; j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("sorted array  is ->\n");
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
    int smallest=0;
    for(int i=0; i<n; i++) smallest=smallest*10+arr[i];
    printf("\nMinimum no. formed = %d\n",smallest);
    
// step 02 -> to form 2nd minimum no-> sort array ke last ke 2 element ko swap kar do yadi ve same nhi hai
//                                      yadi same hai to 2nd last aur usse pehle vale ko swape kar do. yadi yeh bhi same to
//                                      isi tarha karte raho.
    for(int i=n-1; i>=0; i--){
        if(arr[i]!=arr[i-1]){
            int temp=arr[i];
            arr[i]=arr[i-1];
            arr[i-1]=temp;
            break;
        }
    }
    int smallest2=0;
    for(int i=0; i<n; i++) smallest2=smallest2*10+arr[i];
    printf("2nd Minimum no. formed = %d\n",smallest2);
// step 03->sum of two these numbers.
    int ans=smallest+smallest2;
    printf("sum of these no. = %d",ans);
    return 0;
}