#include<stdio.h>
int num(int n){
    int sum=n*n;
    return sum;
}
int main(){
    int n;scanf("%d",&n);
    int square=num(n);
    printf("%d",square);
    return 0;
}