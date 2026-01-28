#include<stdio.h>
int main(){
    int n,count=0;
    scanf("%d",&n);
    for(n;n!=0;n/=10){
        int last=n%10;
        if(last%2==0){
            count+=1;
        }
    }
    printf("%d",count);
    return 0;
}