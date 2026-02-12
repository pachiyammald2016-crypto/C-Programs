#include<stdio.h>
int number(int a,int b){
    int i=0,gcd=0;
    if(a>b){
        i=a;
    }
    else{
        i=b;
    }
    for(int i=1;i<a&&i<b;i++){
        if(a%i==0&&b%i==0){
            gcd=i;
        }
    }
    int sum=(a*b)/gcd;
    return sum;
}
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    int lcm=number(a,b);
    printf("%d",lcm);
    return 0;
}