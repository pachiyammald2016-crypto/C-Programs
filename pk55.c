#include<stdio.h>
#include<string.h>
int str(char n[]){
    int count=0;
    for(int i=0;n[i]!='\0';i++){
    if(n[i]=='a'||n[i]=='e'||n[i]=='i'||n[i]=='o'||n[i]=='u'||n[i]=='A'||n[i]=='E'||n[i]=='I'||n[i]=='O'||n[i]=='U'){
        count++;
    }
}
return count;
}
int main(){
    char n[100];
    int num=0;
    scanf("%s",&n);
    num=str(n);
    printf("%d",num);
    return 0;
}