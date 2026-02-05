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
    int min=arr[0][0];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(arr[i][j]<min){
                min=arr[i][j];
            }
        }
    }
    printf("%d",min);
    return 0;
}