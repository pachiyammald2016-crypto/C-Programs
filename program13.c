#include<stdio.h>
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    switch(n){
        case 1:
        if(m>=700){
            printf("approved");
            break;
        }
        if(m>=650&&m<=699){
            printf("manual review");
            break;
        }
        else{
            printf("invalid");
            break;
        }

        case 2:
        if(m>=700){
            printf("approved");
            break;
        }
        if(m<700){
            printf("rejected");
            break;
        }
        else{
            printf("invalid");
            break;
        }
    }
    return 0;
}