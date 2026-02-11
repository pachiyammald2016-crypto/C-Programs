#include<stdio.h>
int num(int n){
    int count=0;
    for(int i=1;i<=n;i++){
        count+=i;
    }
    return count;
}
int main(){
    int n;
    scanf("%d",&n);
    int sum=num(n);
    printf("%d",sum);
    return 0;
}