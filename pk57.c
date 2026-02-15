#include<stdio.h>
int num(int a){
    int c=a*a;
    return c;
}
int main(){
    int n;
    scanf("%d",&n);
    int square=num(n);
    printf("%d",square);
    return 0;
}