#include<stdio.h>
int main(){
    int max,n;
    scanf("%d%d",&max,&n);
    int i=0;
    int count=0;
    int sum=0;
    while(i<n){
        int enter;
        scanf("%d",&enter);
        sum+=enter;
        if(sum<max){
            count++;
        }
        i++;
    }
    printf("people entered: %d",count);
    if(sum>max){
        printf("overload: yes");
    }
    else{
        printf("overload: no");
    }
    return 0;
}