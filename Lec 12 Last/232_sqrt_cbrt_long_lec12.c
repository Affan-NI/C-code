#include<stdio.h>
#include<math.h>
#include<limits.h>
int main(){
// 01-> <math.h> ke func.
    float x=sqrt(64);
    printf("%f\n",x);
    float y=cbrt(8);
    printf("%f\n",y);
// 02-> <limits.h> ke
    int p=INT_MAX;      // iske liye limits.h chahiye. yhe int ka max no. hai.isse bada no. long me store hoga.
    printf("%d\n",p);
// 03->
    int z=__INT_MAX__;  // jab 2 underscore shru aur end me lagate hai to <limits.h> ki zrorat nhi hai.yhe int ka max no. hai.
    printf("%d\n",z);
    int q=2147483647;   // isse bada no. int me store nhi ho sakta.isse bada no. long me store hoga
    printf("%d\n",q);
   
    return 0;
}