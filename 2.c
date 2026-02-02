#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int avg=0,sum=0;
    for(int j=0;j<size;j++){
        sum+=arr[j];
        avg=sum/size;
    }
    printf("%d",avg);
    return 0;
}