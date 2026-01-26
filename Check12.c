#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n>=90){
        printf("Grade A");
    }
    else if(n>=75 && n<90){
        printf("Grade B");
    }
    else if(n>=51 && n<74){
        printf("Grade C");
    }
    else{
        printf("Fail");
    }
    return 0;
}