#include<stdio.h>
int main(){
    int n,m,p,add;
    scanf("%d%d%d",&n,&m,&p);
    add=n+m+p;
    if(add==180){
        printf("Valid triangle");
    }
    else{
        printf("Invalid triangle");
    }
    return 0;

}