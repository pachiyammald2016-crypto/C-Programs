#include<stdio.h>
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    switch(n){
        case 1:
        printf("any time access");
        break;

        case 2:
        if(m>=9&&m<=20){
            printf("limited access");
            break;
        }
        default:
        printf("access denied");
        break;
    }
    return 0;
}