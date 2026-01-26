#include<stdio.h>
int main(){
    int n,m,p;
    scanf("%d%d%d",&n,&m,&p);
    if(n>m && n>p){
        printf("%d is greater",n);
    }
    else if(m>n && m>p){
        printf("%d is greater",m);
    }
    else{
        printf("%d is greater",p);
    }
    return 0;
}