#include<stdio.h>
int main(){
    char str1[50];
    char str2[50];
    scanf("%s",&str1);
    scanf("%s",&str2);
    char *start=str1;
    char *end=str2;
    while(*start!='\0'){
        start++;
    }
    start--;
    while(*end!='\0'){
        end++;
    }
    end--;
    for(int i=0;str1[i]!='\0'&&str2[i]!='\0';i++){
        printf("%c",str1[i]);
    }
    for(int i=0;str2[i]!='\0';i++){
         printf("%c",str2[i]);
    }

}