#include<stdio.h>
int main(){
    int n,m,p;
    scanf("%d%d",&n,&m);
    switch(n){
        case 1:
        p=m*300;
        printf("%d",p);
        break;

        case 2:
        if(m<=3){
            printf("free");
            break;
        }
        if(m>3){
            p=(m-3)*300;
            printf("%d",p);
            break;
        }
        else{
            printf("nothing");
        }
    }
    return 0;

}