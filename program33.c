#include<stdio.h>
int main(){
    int n,m,s;
    scanf("%d%d",&n,&m);
    switch(n){
        case 1:
        s=m*2;
        printf("%d",s);
        break;

        case 2:
        s=m*5;
        printf("%d",s);
        break;

    }
    return 0;
}