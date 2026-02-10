#include<stdio.h>
int main(){
    int n,prime,rev=0;
    scanf("%d",&n);
    prime=n;
    while(n!=0){
        rev=rev*10+(n%10);
        n=n/10;
    }
    if(rev==prime){
        printf("palindrome");
    }
    else{
        printf("not palindrome");
    }
    return 0;
}