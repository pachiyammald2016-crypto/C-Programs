#include<stdio.h>
int sum(int n){
    int temp=n,org=n;
    int count=0,digit=0,final=1,sum=0;
   while(temp!=0){
        digit=temp%10;
        count+=1;
        temp=temp/10;
    }
    temp=n;
   while(temp!=0){
        digit=temp%10;
        final=1;
        for(int i=1;i<=count;i++){
        final*=digit;
    }
    sum+=final;
    temp=temp/10;
}
    if(org==sum){
        printf("amstrong");
    }
    else{
        printf("not amstrong");
    }
    return 0;
}
int main(){
    int n;
    scanf("%d",&n);
    int org=n;
    int num=sum(n);
    return 0;
}