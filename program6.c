#include<stdio.h>
int main(){
    int n,m,s=50,d=100;
    scanf("%d%d",&n,&m);
    switch(m){
        case 1:
        printf("%d",s);
        break;

        case 2:
        if(n<1000){
            printf("%d",d);
            break;
        }
        if(n>=1000){
            printf("Free");
            break;
        }
    }
    return 0;
}