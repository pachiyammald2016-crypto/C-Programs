#include<stdio.h>
int main(){
    char n;
    scanf("%c",&n);
    if(n>=65 && n<=90){
        printf("Uppercase Letter");
    }
    else if(n>=97 && n<=122){
        printf("Lowercase Letter");
    }
    else{
        printf("Special Character");
    }
    return 0;
}