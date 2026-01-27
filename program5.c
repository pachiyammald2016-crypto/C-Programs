#include<stdio.h>
int main(){
    int plantype,paytype;
    scanf("%d",&plantype);
    scanf("%d",&paytype);
    switch(plantype){
        case 1:
        if(paytype==11||paytype==12){
            int p=199-20;
            printf("%d",p);
            break;
        }
        else{
            printf("no cashback");
            break;
        }

        case 2:
        if(paytype==11||paytype==12){
            int p=399-20;
            printf("%d",p);
            break;
        }
        else{
            printf("no cashback");
            break;
        }
    }
    return 0;
}