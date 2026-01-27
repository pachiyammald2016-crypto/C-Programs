#include<stdio.h>
int main(){
    int n,m,p;
    scanf("%d%d",&n,&m);
    switch(n){
        case 1:
        p=m*1;
        printf("%d",p);
        break;

        case 2:
        p=m*3;
        printf("%d",p);
        break;

        default:
        p=m*10;
        printf("%d",p);
        break;
    }
    return 0;
}