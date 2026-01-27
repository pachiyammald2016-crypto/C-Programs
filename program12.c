#include<stdio.h>
int main(){
    int n,m,p;
    scanf("%d%d",&n,&m);
    switch(n){
        case 1:
        if(m==1){
            printf("100");
            break;
        }
        if(m>=2){
            printf("800");
            break;
        }

        case 2:
        p=m*240;
        printf("%d",p);
        break;
    }
    return 0;
}