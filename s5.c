#include<stdio.h>
int main(){
    int n,prime=1;
    scanf("%d",&n);
    if(n<1){
        printf("not prime");
        return 0;
    }
    else{
        for(int i=2;i<=n/2;i++){
            if(n%i==0){
                prime=0;
                break;
            }
        }
    }
    if(prime==1){
        printf("prime");
    }
    else{
        printf("not prime");
    }
    return 0;
}