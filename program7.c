#include<stdio.h>
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    switch(n){
        case 1:
        printf("4 percentage");
        break;

        case 2:
        if(m<=3){
            printf("5 percentage");
            break;
        }
        else{
            printf("7 percentage");
            break;
        }
    }
    return 0;
}