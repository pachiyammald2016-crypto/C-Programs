#include<stdio.h>
int main(){
    int n,sum=0;
    scanf("%d",&n);
    int org=n;
    for(n;n!=0;n/=10){
        int last=n%10;
        int fact=1;
    for(int i=1;i<=last;i++){
        fact*=i;
    }
    sum+=fact;
    }
    if(org==sum){
        printf("yes");
    }
    else{
        printf("no");
    }
}