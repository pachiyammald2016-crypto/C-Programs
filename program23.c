#include<stdio.h>
int main(){
    int n,m,total;
    scanf("%d%d",&n,&m);
    switch(n){
        case 1:
        total=m-(m*0.05)+1;
        printf("%d",total);
        break;

        case 2:
        total=m-(m*0.15);
        printf("%d",total);
        break;
    }
    return 0;
}