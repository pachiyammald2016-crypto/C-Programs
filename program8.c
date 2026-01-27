#include<stdio.h>
int main(){
    int mark,att;
    scanf("%d%d",&att,&mark);
    if(att>75){
        if(mark<50){
            printf("fail");
        }
        if(mark>=50&&mark<75){
            printf("pass");
        }
        if(mark>=75){
            printf("distinction");
        }
    }
    else{
        printf("fail");
    }
    return 0;
}