#include<stdio.h>
int sum(int n){
    int sum=0;
    for(int i=1;i<=10;i++){
        sum=n*i;
        printf("%d*%d=%d\n",n,i,sum);
    }
    return 0;
}
int main(){
    int n;
    scanf("%d",&n);
    int num=sum(n);
    return 0;
}