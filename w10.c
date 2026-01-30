#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int i=0;
    int count=0;
    int sum=0;
    while(i<n){
        int study;
        scanf("%d",&study);
        if(study==0){
            count++;
        }
        else{
            sum++;
        }
        i++;
    }
    printf("Unstudy: %d\n",count);
    if(count>=sum){
        printf("Risk: high");
    }
    else{
        printf("Risk: low");
    }
    return 0;
}