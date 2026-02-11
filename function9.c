#include<stdio.h>
int sum(int n){
    int rev=0;
    int num=n;
    while(n!=0){
        int digit=n%10;
        rev=rev*10+digit;
        n=n/10;
    }
    if(rev==num){
        printf("palindrome");
    }
    else{
        printf("not palindrome");
    }
    return 0;
}
int main(){
    int n;
    scanf("%d",&n);
    int p=sum(n);
    return 0;
}