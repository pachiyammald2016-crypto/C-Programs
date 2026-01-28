#include<stdio.h>
int main(){
    int n,m,sum=0;
    scanf("%d%d",&n,&m);
    for(int i=1;i<=m;i++){
        if(i%n==0){
            sum+=i;
        }
    }
    printf("%d",sum);
    return 0;
}