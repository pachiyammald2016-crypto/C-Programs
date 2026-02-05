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
    int count=0;
    int sum=0;
    int num;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            num=arr[i+1][j+1];
            sum+=arr[i][j+1];

            if(num==sum){
                count++;
            }
        }
    }
    printf("%d",count);
    return 0;
}