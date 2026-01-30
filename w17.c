#include<stdio.h>
int main(){
    int wallet,n;
    scanf("%d%d",&wallet,&n);
    int i=0;
    int final=wallet;
    int sum=0;
    int count=0;
    int initial=0;
    int num=0;
    while(i<n){
        int purchase;
        scanf("%d",&purchase);
        sum+=purchase;
        if(sum<final){
            count++;
            initial=sum;
        }
        i++;
    }
    num=final-initial;
    printf("%d\n",count);
    printf("%d",num);
}