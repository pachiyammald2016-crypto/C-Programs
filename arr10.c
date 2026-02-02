#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int max=-1;
    int temp=0;
    for(int j=size-1;j>=0;j--){
            temp=arr[j];
            arr[j]=max;

        if(temp>max){
            max=temp;
        }
    }
    for(int i=0;i<size;i++){
        printf("%d",arr[i]);
    }
}