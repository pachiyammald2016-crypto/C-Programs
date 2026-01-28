#include<stdio.h>
int main(){
    int n,sum=0;
    scanf("%d",&n);
    for(n;n!=0;n/=10){
        int last=n%10;
        sum+=last;
    }
     printf("%d",sum);
    return 0;
}