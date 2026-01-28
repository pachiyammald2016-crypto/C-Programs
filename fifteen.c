#include<stdio.h>
int main() {
    int n,count=0,res;
    scanf("%d",&n);
    for (int i=2;i<=n;i++){
        res=0;
        for(int j=2;j<i;j++){
            if(i%j==0){
                res=1;
                break;
            }
        }
        if(res==0){
        count++;
    }
}
    printf("%d",count);
    return 0;
}