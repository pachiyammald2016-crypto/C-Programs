#include<stdio.h>
int main(){
    char n;
    scanf("%c",&n);
    if(n>=48 && n<=57){
        printf("Digit");
    }
    else if(n>=65 && n<=90){
        printf("Uppercase letters");
    }
    else if(n>=97 && n<=122){
        printf("Lowercase letters");
    }
    else{
        printf("Special Charecters");
    }
    return 0;

}