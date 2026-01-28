#include<stdio.h>
int main(){
    int n,rev=0;
    scanf("%d",&n);
    for(n;n!=0;n/=10){
        int last=n%10;
        rev=rev*10+last;
    }
    printf("%d",rev);
    return 0;
}