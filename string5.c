#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    fgets(str,sizeof(str),stdin);
    int count=0;
    int max=0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            count++;
            if(count>max){
                max=count;
            }
        }
        else{
            count=0;
        }
    }
    printf("%d",max);
    return 0;
}