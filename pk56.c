#include<stdio.h>
int num(int a,int b){
    int c=a+b;
    return c;
}
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    int sum=num(a,b);
    printf("%d",sum);
    return 0;
}