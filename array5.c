#include<stdio.h>
int main(){
    int r,c,i;
    scanf("%d%d",&r,&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int sum,sum1;
    int avg=0,avg1=0;
    int index=0;
    for(int i=0;i<r-1;i++){
         sum=0;
        for(int j=0;j<c;j++){
            sum+=arr[i][j];
            avg=sum/(r*c);
        }
    }
    for(int i=1;i<r;i++){
         sum1=0;
        for(int j=0;j<c;j++){
            sum1+=arr[i][j];
            avg1=sum1/(r*c);
        }
         if(avg>avg1){
         index=i;
    }
    }
    printf("%d",index);
    return 0;
}