#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int count=0;
    int res[size];
    int max=arr[size-1];
    for(int j=size-1;j>=0;j--){
        if(arr[j]>=max){
          max=arr[j];
          res[count++]=max;
        }
    }
    for(int k=count-1;k>=0;k--){
        printf("%d ",res[k]);
    }
     return 0;
}