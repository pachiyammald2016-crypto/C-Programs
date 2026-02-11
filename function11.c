#include<stdio.h>
int sum(int n){
    int count=0;
    while(n!=0){
        int digit=n%10;
        count+=1;
        n=n/10;
    }
    return count;
}
int main(){
    int n;
    scanf("%d",&n);
    int num=sum(n);
    printf("%d",num);
    return 0;
}