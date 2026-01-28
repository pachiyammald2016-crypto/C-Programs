#include<stdio.h>
int main(){
    int n,sum=0,s;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        s=i*i;
        sum+=s;
    }
    printf("%d",sum);
    return 0;
}