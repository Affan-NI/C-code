// 01-> yhe code error dega niche ka theek hai

// #include<stdio.h>
// int main(){
//     int x=5,y=7;
//     // int* a,b; means int* x and int y
//     int* a=&x, b=&y;
//     printf("%p\n",a);
//     printf("%p\n",b);
//     return 0;
// }

#include<stdio.h>
typedef int* int_pointer;
int main(){
    int x=5,y=7;
    int_pointer a=&x,b=&y;
    printf("%p\n",a);
    printf("%p\n",b);
    return 0;
}