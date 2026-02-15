#include<stdio.h>
int num(int a,int b){
    int temp=a;
    a=b;
    b=temp;
    printf("%d\n",a);
    printf("%d",b);
    return 0;
}
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    int swap=num(a,b);
    return 0;
}