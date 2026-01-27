#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    switch(n){
        case 1:
        printf("membership fee $1500");
        break;

        case 2:
        printf("membership fee $4000");
        break;

        case 3:
        printf("membership fee $7000");
        break;
    }
    return 0;
}