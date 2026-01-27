#include<stdio.h>
int main(){
    int n,m,p;
    scanf("%d%d",&n,&m);
    switch(n){
        case 1:
        if(m<=30){
            p=m*5;
            printf("%d",p);
            break;
        }
        if(m>30){
            p=m*8;
            printf("%d",p);
            break;
        }

        case 2:
        p=m*10;
        printf("%d",p);
        break;

    }
    return 0;
}