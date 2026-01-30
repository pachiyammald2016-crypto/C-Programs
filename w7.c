#include<stdio.h>
int main(){
    int capacity,n;
    scanf("%d%d",&capacity,&n);
    int i=1;
    int total=0,final=0;
    int sum=0,add=0;
    int count=0;
    while(i<=n){
        int bed;
        scanf("%d",&bed);
        if(bed<1){
            sum+=(-bed);
        }
        if(bed>1){
            add+=bed;
        }
        total=sum+add;
        final=total-sum;
        if(total>90){
            count++;
        }
        i++;
    }
    printf("final: %d\n",final);
    printf("count: %d\n",count);
    return 0;
}