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
    int sum=1;
    int max=0;
    int index=0;
    for(int i=0;i<r;i++){
        sum=1;
        for(int j=0;j<c;j++){
            sum*=arr[i][j];
        }
        if(sum>max){
            max=sum;
            index=i;
        }
    }
    printf("%d",index);
    return 0;
}