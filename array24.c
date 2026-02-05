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
    int prime;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(arr[i][j]>0){
                prime=1;
                for(int k=c-1;k<=arr[i][j]/2;k++){
                    if(arr[i][j]%k==0){
                        prime=0;
                    }
                }
            }
        }
        if(prime){
        count++;
    }
    } 
    printf("%d",count);
    return 0;
}