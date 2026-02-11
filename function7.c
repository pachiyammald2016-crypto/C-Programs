#include<stdio.h>
int sum(int n){
    int prime=1;
    if(n<1){
        printf("not prime");
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
int main(){
    int n;
    scanf("%d",&n);
    int num=sum(n);
    return 0;
}