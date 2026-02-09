#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    fgets(str,sizeof(str),stdin);
    char number=0;
    for(int i=0;str[i]!='\0';i++){
        number=str[i];
         printf("%c",number);
    }
    return 0;
}