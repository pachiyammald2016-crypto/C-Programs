#include<stdio.h>
#include<math.h>

int main(){
    int n,count=0,num=0,temp;
    scanf("%d",&n);
    temp=n;
    while(n!=0){
        int digit=n%10;
        count++;
    }
    while(n!=0){
        int digit=n%10;
        num+=pow(digit,count);
    }
    if(num==temp){
        printf("amstrong");
    }
    else{
        printf("not amstrong");
    }
    return 0;
}