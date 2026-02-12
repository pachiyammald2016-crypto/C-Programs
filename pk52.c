#include<stdio.h>
int number(int n){
    if(n%2==0){
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
    int final=number(n);
    return 0;
}