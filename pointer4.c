#include<stdio.h>
int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    char *p=str;
    while(*p!='\0'){
     printf("%c",*p);
     p++;
    }
    return 0;
}