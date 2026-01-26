#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n>0){
        printf("Positive number");
    }
    else if(n==0){
        printf("Zero");
    }
    else{
        printf("Negative number");
    }
    return 0;
}