#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    switch(n){
        case 1:
        printf("40 Mbps");
        break;

        case 2:
        printf("100 Mbps");
        break;

        case 3:
        printf("300 Mbps");
        break;
    }
    return 0;
}