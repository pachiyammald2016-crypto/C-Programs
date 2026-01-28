#include<stdio.h>
int main(){
    int n,sum=0,count=0;
    scanf("%d",&n);
    int org=n;
    for(int temp=n;temp!=0;temp/=10){
        count++;
    }
    for(int temp=n;temp!=0;temp/=10){
        int last=temp%10;
        int p=1;

        for(int i=1;i<=count;i++){
         p*=last;
    }
    sum+=p;
}
 if(sum==org){
    printf("amstrong");
 }
 else{
    printf("not amstrong");
 }
    return 0;
}