#include<stdio.h>
int main(){
    int n;
    char m;
    scanf("%d",&n);
    scanf(" %c",&m);
    switch(n){
        case 1:
        if(m=='R'){
            printf("5000");
            break;
        }
        if(m=='S'){
            printf("3000");
            break;
        }

        case 2:
        if(m=='R'){
            printf("9000");
            break;
        }
        if(m=='S'){
            printf("7000");
            break;
        }
    }
    return 0;
}