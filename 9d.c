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
    arr[0][0]=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<i;j++){
            if(arr[i][j+i]!=0){
                arr[i][j+i]=0;
            }
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}