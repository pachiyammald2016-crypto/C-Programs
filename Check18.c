#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n<=100){
        int add=n*3;
        printf("%d",add);
    }
    else if(n>=101 && n<=200){
        int add =n*5;
        printf("%d",add);
    }
    else if(n>=201 && n<=300){
        int add= n*7;
        printf("%d",add);
    }
    else{
        int add =n*10;
        printf("%d",add);
    }
    return 0;
}