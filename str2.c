#include<stdio.h>
#include<string.h>
int main(){
    char str[20];
    fgets(str,sizeof(str),stdin);
    int num=0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='\n'){
            continue;
        }
        if(str[i]>='A'&&str[i]<='Z'){
            printf("valid");
            break;
        }
        else{
            printf("invalid");
            break;
        }
    }
    return 0;
}