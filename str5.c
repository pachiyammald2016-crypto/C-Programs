#include<stdio.h>
#include<string.h>
int main(){
    char str[20];
    fgets(str,sizeof(str),stdin);
    int j=strlen(str);
    int count=1;
    for(int i=0;i<j/2;i++){
        if(str[i]!=str[j-1-i]){
               count=0;
               break;
            }
        }
    if(count){
        printf("palindrome");
    }
    else{
        printf("not palindrome");
    }
    return 0;
}