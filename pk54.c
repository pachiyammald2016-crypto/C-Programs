#include<stdio.h>
int num(int cel){
    int cal=(cel*9/5)+32;
    return cal;
}
int main(){
    int cel;
    scanf("%d",&cel);
    int fer=num(cel);
    printf("%d",fer);
    return 0;
}