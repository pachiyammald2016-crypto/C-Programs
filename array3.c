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
    int index=0;
    int num;
    for(int i=0;i<r;i++){
        num=0;
        for(int j=0;j<c;j++){
            if(arr[i][j+1]!=arr[i][j]){
                num++;
            } 
        }
        if(num==c){
            index=i;
        }
    }
     printf("%d",index);
    return 0;

}