#include<stdio.h>
int main(){
    int n,m,p;
    scanf("%d%d",&n,&m);
    switch(n){
        case 1:
        if(m<=5){
        p=m*50;
        printf("%d",p);
        break;
        }
        case 2:
        if(m<=10){
        p=m*100;
        printf("%d",p);
        break;
        }
        default:
        p=m*200;
        printf("%d",p);
        break;
    }
    return 0;
}