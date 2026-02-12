#include<stdio.h>
int sum(int a,int b){
    int i=0,gcd=0;
    if(a>b){
        i=a;
    }
    else{
        i=b;
    }
    for(int i=1;i<=a&&i<=b;i++){
        if(a%i==0&&b%i==0){
            gcd=i;
        }
    }
    return gcd;
}
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    int num=sum(a,b);
    printf("%d",num);
    return 0;
}