#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n%3==0 && n%7==0){
        printf("It is divisible by both 3 and 7");
    }
    else{
        printf("Not divisible by 3 and 7");
    }
    return 0;
}