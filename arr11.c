#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int num=0;
    int not=-1;
    int mid=size/2;
    int sum=0;
    for(int j=0;j<size/2;j++){
        sum+=arr[j];
    }
    int sum2=0;
    for(int k=size-1;k>mid;k--){
        sum2+=arr[k];
    }
    if(sum==sum2){
        printf("%d",mid);
    }
    if(sum!=sum2){
        printf("%d",not);
    }
    return 0;

}