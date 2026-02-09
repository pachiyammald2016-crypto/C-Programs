#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    fgets(str,sizeof(str),stdin);
    int j=strlen(str);
    for(int i=j-1;i>=0;i--){
        printf("%c",str[i]);
    }
    return 0;
}