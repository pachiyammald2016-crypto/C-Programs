#include<stdio.h>
int main(){
    int n,rev=0;
    scanf("%d",&n);
    int org=n;
    for(n;n!=0;n/=10){
        int last=n%10;
        rev=rev*10+last;
    }
    if(rev==org){
        printf("palindrome");
    }
    else{
        printf("not palindrome");
    }
    return 0;
}