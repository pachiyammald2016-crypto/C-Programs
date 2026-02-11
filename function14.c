#include<stdio.h>
int sum(int n){
    int temp=n;
    int sum=0;
    for(int i=1;i<n;i++){
        if(n%i==0){
            sum+=i;
        }
    }
    if(sum==temp){
        printf("perfect number");
    }
    else{
        printf("not perfect number");
    }
    return 0;
}
int main(){
    int n;
    scanf("%d",&n);
    int num=sum(n);
    return 0;
}