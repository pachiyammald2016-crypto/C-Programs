#include<stdio.h>
int main(){
    int code,ex,s=50000,d=35000;
    scanf("%d%d",&code,&ex);
    switch(code){
        case 1:
        if(ex>=3){
            int p=s+(ex*5000);
            printf("%d",p);
            break;
        }
        else{
            printf("invalid");
            break;
        }

        case 2:
        if(ex>=3){
            int p=d+(ex*5000);
            printf("%d",p);
            break;
        }
        else{
            printf("invalid");
            break;
        }
    }
    return 0;
}