#include<stdio.h>
int main(){
    int n,count=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i%1==0&&i%n==0){
            count+=1;
        }
    }
    printf("%d",count);
    return 0;
}