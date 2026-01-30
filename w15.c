#include<stdio.h>
int main(){
    int overtime;
    scanf("%d",&overtime);
    int i=0;
    int sum=0;
    int count=0;
    while(i<overtime){
        int time;
        scanf("%d",&time);
        sum+=time;
        if(time>4){
            count++;
        }
        i++;
    }
    printf("overtime: %d\n",sum);
    printf("greater: %d",count);
}