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
    for(int i=0;i<r-(r-1);i++){
        for(int j=0;j<c;j++){
            sum+=arr[i][j];
        }
    }

      int sum1=0;
    for(int i=r-1;i<r;i++){
        for(int j=0;j<c;j++){
            sum1+=arr[i][j];
    
       }
    }

    int sum2=0;
    for(int i=r/2;i<r-1;i++){
        for(int j=0;j<c-(c-1);j++){
            sum2+=arr[i][j];
        }
    }

     int sum3=0;
    for(int i=r/2;i<r-1;i++){
        for(int j=c-1;j<=c-1;j++){
            sum3+=arr[i][j];
        }
    }
    int num=sum+sum1+sum2+sum3;
    printf("%d",num);
   
    return 0;
}