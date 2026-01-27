#include<stdio.h>
int main(){
    int n,m,p;
    scanf("%d%d",&n,&m);
    switch(n){
        case 1:
        p=m*105;
        printf("%d",p);
        break;

        case 2:
        p=m*92;
        printf("%d",p);
        break;

        case 3:
        p=m*85;
        printf("%d",p);
        break;
    }
    return 0;
}