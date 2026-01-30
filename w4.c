#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int count=0;
    int fail=0;
    int i=0;
    while(i<n){
        int sum;
        scanf("%d",&sum);
        if(sum==0){
            count++;
        }
        if(count>fail){
            fail=count;
        }
        count=0;
        i++;
    }
    printf("%d",fail);
    return 0;
}