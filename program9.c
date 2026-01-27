#include<stdio.h>
int main(){
    int n;
    char ch;
    scanf("%d",&n);
    scanf(" %c",&ch);
    switch(n){
        case 1:
        if(ch=='A'){
            printf("2500");
            break;
        }
        if(ch=='B'){
            printf("2000");
            break;
        }

        case 2:
        if(ch=='C'){
            printf("4000");
            break;
        }
        if(ch=='D'){
            printf("3000");
            break;
        }
    }
    return 0;

}