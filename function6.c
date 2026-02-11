#include<stdio.h>
int sum(int n){
    int c=1;
    for(int i=n;i>=1;i--){
       c*=i; 
    }
    return c;
}
int main(){
    int n;
    scanf("%d",&n);
    int num=sum(n);
    printf("%d",num);
    return 0;
}