#include<stdio.h>
int main(){
    int r,c,i,j;
    scanf("%d%d",&r,&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int sum;
    int max=0;
    int min=0;
    for(int i=0;i<r;i++){
        sum=0;
        for(int j=0;j<c;j++){
            sum+=arr[i][j];
        }
        if(sum>max){
            max=sum;
        }
    }
     min=max;
    for(int i=0;i<r;i++){
        sum=0;
        for(int j=0;j<c;j++){
            sum+=arr[i][j];
        }
         if(sum<min){
            min=sum;
        }
    }
    int num=max-min;
     printf("%d",num);
    return 0;
}