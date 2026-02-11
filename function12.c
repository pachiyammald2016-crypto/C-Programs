#include<stdio.h>
int sum(int n){
    if(n%4==0&&n%100!=0||n%400==0&&n%100!=0||n%4==0&&n%400==0){
        printf("leap year");
    }
    else{
        printf("not leap year");
    }
    return 0;
}
int main(){
    int n;
    scanf("%d",&n);
    int num=sum(n);
    return 0;
}