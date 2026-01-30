#include<stdio.h>
int main(){
    int capacity,n;
    scanf("%d%d",&capacity,&n);
    int i=0;
    int initial=capacity;
    int sum=0;
    int num=0;
    while(i<n){
        int patients;
        scanf("%d",&patients);
        sum+=patients;
        i++;
    }
    printf("treated patients: %d\n",initial);
    if(sum>initial){
    num=sum-initial;
    printf("%d",num);
    }
    else{
        printf("%d",0);
    }
    return 0;
}