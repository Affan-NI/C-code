#include<stdio.h>
int main()
{
//Ques: Take 3 positive integers input and print the greatest of them.
// using nested if else.
    int a,b,c;
    printf("Enter 1st number: ");
    scanf("%d",&a);
    printf("Enter 2nd number: ");
    scanf("%d",&b);
    printf("Enter 3rd number: ");
    scanf("%d",&c);
    if(a>b){ //yadi yeh code run hua to b sabse bada nhi ho sakta hai chooki a>b hai isliy  sabse bada ya to  c hoga ya a
        if(a>c){
        printf("%d is greatest",a);
        }
        else{
        printf("%d is greatest",c);
        }
    
    } // yadi a>b false hai to else chalega
    else { // isliy b>a tru hai
        if(b>c){
        printf("%d is greatest",b);
        }
        else{
        printf("%d is greatest",c);
        }
    }




return 0;
}
 