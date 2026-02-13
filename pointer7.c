#include<stdio.h>
int main(){
    char str[100];
    scanf("%s",&str);
    char *start=str;
    char *end=str;
      int palin=1;
    while(*end!='\0'){
        end++;
    }
    end--;
    while(start<end){
        if(*start!=*end){
            palin=0;
            break;
        }
        start++;
        end--;
    }

    if(palin==1){
        printf("palindrome");
    }
    else{
        printf("not palindrome");
    }
    return 0;
}