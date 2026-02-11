#include<stdio.h>
int a=0;
int b=1,temp=0;
int sum(int n){
    printf("%d %d ",a,b);
    for(int i=2;i<n;i++){
        temp=a+b;
        a=b;
        b=temp;
        printf("%d ",b);
    }
    return 0;
}
int main(){
    int n;
    scanf("%d",&n);
    int num=sum(n);
    return 0;
}


