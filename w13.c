#include<stdio.h>
int main(){
    int total,n;
    scanf("%d%d",&total,&n);
    int i=0;
    int rem=total;
    int count=0;
    int sum=0;
    while(i<n){
        int day;
        scanf("%d",&day);
        if(day<rem){
            rem-=day;
            count++;
        }
        else{
            sum=day-rem;
        }
        i++;
    }
    printf("%d\n",count);
    printf("%d",sum);
    return 0;
}