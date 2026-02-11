#include<stdio.h>
int diff(int a){
    if(a%2==0){
        printf("even");
    }
    else{
        printf("odd");
    }
    return 0;
}

int main(){
    int n;
    scanf("%d",&n);
    int num=diff(n);
    return 0;
}