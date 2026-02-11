#include<stdio.h>
int num(int n){
    int c=0;
    int digit;
    while(n!=0){
        digit=n%10;
        n=n/10;
        c+=digit;
    }
   return c;
}
int main(){
    int n;
    scanf("%d",&n);
    int sum=num(n);
    printf("%d",sum);
    return 0;
}