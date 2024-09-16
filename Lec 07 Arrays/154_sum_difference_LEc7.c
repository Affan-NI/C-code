#include<Stdio.h>
// even indecies ke element ka sum karo. fir odd valo ka sum karo .fir don sum ka difernce nikalo.
int main(){
    int arr[5]={1,2,3,4,5};
    int evensum=0;
    int oddsum=0;
    for(int i=0; i<=4; i++){
        if(i%2==0) evensum=evensum+arr[i];
        else oddsum=oddsum+arr[i];
    }
    int differnce=evensum-oddsum;
    printf("%d ", differnce);
  
    return 0;
}