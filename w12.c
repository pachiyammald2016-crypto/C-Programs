#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int i=0;
    int current=0;
    int count=0;
    while(i<n){
        int data;
        scanf("%d",&data);
        if(data>current){
            current=data;
        }
        if(data>5){
        count++;
    }
    i++;
    }
    printf("Max: %d\n",current);
    printf("Surge hours: %d",count);
    return 0;

}