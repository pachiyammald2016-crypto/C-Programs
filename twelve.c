#include<stdio.h>
int main(){
    int n,power,m=1;
    scanf("%d%d",&n,&power);
    for(int i=1;i<=power;i++){
        m*=n;
    }
    printf("%d",m);
    return 0;
}