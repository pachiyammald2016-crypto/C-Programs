#include<stdio.h>
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    switch(n){
        case 1:
        if(m<=5){
            printf("1500");
            break;
        }
        if(m>5){
            printf("2500");
            break;
        }
        else{
            printf("nothing");
            break;
        }

        case 2:
        if(m<=5){
            printf("4000");
            break;
        }
        if(m>5){
            printf("6000");
            break;
        }
        else{
            printf("nothing");
            break;
        }
    }
    return 0;
}