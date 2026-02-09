#include<stdio.h>
#include<string.h>
int main(){
    char str[20];
    fgets(str,sizeof(str),stdin);
    char num;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='@'){
            break;
        }
         printf("%c",str[i]);
    }
    return 0;
}