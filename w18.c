#include<stdio.h>
int main(){
    int capacity,n;
    scanf("%d%d",&capacity,&n);
    int i=0;
    int initial=capacity;
    int count=0;
    int sum=0;
    while(i<n){
        int data;
        scanf("%d",&data);
        if(data<initial){
            count++;
        }
        if(data>initial){
            sum++;
        }
        i++;
    }
    printf("safe hours: %d\n",count);
    printf("failure count: %d",sum);
    return 0;
}