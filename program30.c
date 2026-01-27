#include<stdio.h>
int main(){
    int m;
    scanf("%d",&m);
    switch(1){
        case 1:
        if(m<=1){
            printf("short interruption");
            break;
        }
        if(m<=4){
            printf("medium interruption");
            break;
        }
        if(m>4){
        printf("long interruption");
        break;
        }
    }
    return 0;
}