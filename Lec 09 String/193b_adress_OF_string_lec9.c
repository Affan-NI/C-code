#include<Stdio.h>
#include<string.h>
int main(){
    char str[]="College Wallah";
    // adress-> po0re string ka address=1st elemnt ka adress
    printf("%p\n",str); // yha & dene ki koi zrooratnhihai.
        // OR
     printf("%p\n",&str[0]); 
    return 0;
}