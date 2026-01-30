#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int i=0;
    int sum=0;
    int count=0;
    while(i<n){
        int delay;
        scanf("%d",&delay);
        sum+=delay;
        if(delay>2){
            count++;
        }
        i++;
    }
    printf("%d\n",sum);
    printf("%d",count);
    return 0;
}