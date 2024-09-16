#include<stdio.h>
int main(){
    char arr[]={'c','o','l','l','e','g','e','\0'};
    // \0 lagane se ab hame array ka size count karne ki koi zarorat nhi hai.
    int i=0;
    while(arr[i]!='\0'){
        printf("%c",arr[i]);
        i++;
    }
    printf("\n");
    char brr[]="college wallah chanel is best for coders\0";    // yha last me \0 likho ya nhi.
    int j=0;
    while(brr[j]!='\0'){
        printf("%c",brr[j]);
        j++;
    }
    return 0;
}