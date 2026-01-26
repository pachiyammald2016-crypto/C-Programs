#include<stdio.h>
int main(){
    int n,m,p;
    scanf("%d%d%d",&n,&m,&p);
    if(n==m && m==p && p==n){
        printf("Equilateral Triangle");
    }
    else if((n==m && m!=p && n!=p)||(n!=m && p!=m && p==n)||(m!=n && m==p && p!=n)){
        printf("Isosceles Triangle");
    }
    else if(n!=m && m!=p && p!=n){
        printf("Scalene Triangle");
    }
    return 0;
}