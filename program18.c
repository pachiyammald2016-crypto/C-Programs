#include<stdio.h>
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    switch(n){
        case 1:
        if(m>=80){
            printf("excellent");
            break;
        }
        
        case 2:
        if(m>=60){
            printf("good");
            break;
        }

        default:
        if(m<60){
            printf("need improvement");
            break;
        }
    }
    return 0;
}