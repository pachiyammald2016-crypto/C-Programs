#include<stdio.h>
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    int small= (n<m)?n:m;
    printf("%d is small",small);
    return 0;
}