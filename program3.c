#include<stdio.h>
int main(){
    int AT,balance,WA;
    scanf("%d%d%d",&AT,&balance,&WA);
    switch(AT){
        case 1:
        if(balance>=WA){
            printf("Transaction successfull");
        }
        else{
            printf("Transaction rejected");
        }
        break;

        case 2:
        if(WA>=5000){
            printf("Limit exceeded");
        }
        }
        return 0;
    }
