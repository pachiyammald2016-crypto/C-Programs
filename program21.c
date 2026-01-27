#include<stdio.h>
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    switch(n){
        case 1:
        if(m<18){
            printf("150");
            break;
        }
        else{
            printf("200");
            break;
        }

        case 2:
        if(m<18){
            printf("250");
            break;
        }
        else{
            printf("300");
            break;
        }
    }
    return 0;
}