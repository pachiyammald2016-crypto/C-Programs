#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    switch(n){
        case 1:
        printf("80000");
        break;

        case 2:
        printf("60000");
        break;

        default:
        printf("45000");
        break;
    }
    return 0;
}