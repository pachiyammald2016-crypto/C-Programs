#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    switch(n){
        case 1:
        printf("40");
        break;

        case 2:
        printf("120");
        break;

        default:
        printf("Free");
        break;
    }
    return 0;
}