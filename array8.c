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
    int max=0;
    int sum=0;
    for(int i=0;i<=r/2;i++){
        for(int j=0;j<=c/2;j++){
            sum+=arr[i][j];
        }
    }
     sum=0;
    for(int i=0;i<=r/2;i++){
        for(int j=r/2;j<c;j++){
            sum+=arr[i][j];
        }
    }
    sum=0;
    for(int i=r/2;i<r;i++){
        for(int j=0;j<=c/2;j++){
            sum+=arr[i][j];
        }
    }
     sum=0;
    for(int i=r/2;i<r;i++){
        for(int j=c/2;j<c;j++){
            sum+=arr[i][j];
        }
    }
     for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(sum>max){
                max=sum;
            }
    }
    }

    printf("%d",sum);
    return 0;
}