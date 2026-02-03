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
    int count=0,sum1=0,count1=0;
    for(int i=0;i<r/2;i++){
        for(int j=0;j<c;j++){
            if(arr[i][j]%2==0){
                count1++;
            }
            else{
                sum1++;
            }
        }
    }
    int count2=0;
    if(count1==sum1){
        count2++;
    }
    printf("%d\n",count2);

 int sum=0;
     for(int i=r-1;i<=r/2;i++){
        for(int j=0;j<c;j++){
            if(arr[i][j]%2==0){
                count++;
            }
            else{
                sum++;
            }
        }
    }
    if(count==sum){
        count2++;
    printf("%d\n",count2);
    }
    return 0;
}