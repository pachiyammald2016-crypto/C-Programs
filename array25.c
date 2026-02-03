#include<stdio.h>
int main(){
    int r,c;
    scanf("%d%d",&r,&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int sum=0;
    int count=0;
    int sum1=0;
    for(int i=0;i<r;i++){
         int max=arr[i][0];
         int min=arr[i][0];
        for(int j=0;j<c;j++){
            if(arr[i][j]>max){
                max=arr[i][j];
            }
            else if(arr[i][j]<min){
                min=arr[i][j];
            }
        }
         sum=max-min;
             if(sum<=1000){
                count++;
             }
    }
     printf("%d\n",count);
    return 0;
}