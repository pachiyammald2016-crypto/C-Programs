#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n>=10 && n<=20){
        printf("Number within range");
    }
    else{
        printf("Number not within range");
    }
    return 0;
}