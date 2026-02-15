#include<stdio.h>
int large(int arr[],int size){
    int max=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]<max){
            max=arr[i];
        }
    }
    printf("%d",max);
    return 0;
}
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    large(arr,size);
}