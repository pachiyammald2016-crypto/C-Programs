#include<stdio.h>
int main(){
    int max,n;
    scanf("%d%d",&max,&n);
    int org=max;
    int sum=0;
    int count=0;
    int i=0;
    while(i<n){
        int weight;
        scanf("%d",&weight);
        sum+=weight;
        if(weight<max){
            max-=weight;
        }
        if(org>max){
            count++;
        }
        i++;
    }
    printf("%d\n",count);
    if(sum>max){
        printf("Overload: yes");
    }
    else{
        printf("Overload: no");
    }
    return 0;
}