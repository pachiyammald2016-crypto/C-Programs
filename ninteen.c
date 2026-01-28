#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    
    int n=(a<b)?a:b;
    int gcd=1;

    for(int i=1;i<=n;i++){
        if(a%i==0&&b%i==0){
            gcd=i;
        }
    }
    int lcm=(a*b)/gcd;
    printf("%d",lcm);


}