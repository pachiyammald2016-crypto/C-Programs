#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    switch(n){
        case 1:
        printf("under warranty");
        break;

        case 2:
        printf("limited warranty");
        break;

        default:
        printf("out of warranty");
        break;
    }
    return 0;
}