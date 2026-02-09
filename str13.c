#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    fgets(str,sizeof(str),stdin);
    char target;
    scanf("%c",&target);
    int found=1;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==target){
            printf("%d",i);
            found=1;
            break; 
        }
    }
    if(found==0){
        printf("-1");
    }
    return 0;
}