#include<stdio.h>
int large(int arr[],int size){
    int max=0;
    int min=arr[0];
    int second=0;
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    for(int i=1;i<size;i++){
        if(arr[i]<min){
            min=arr[i];
        }
        else if(arr[i]!=max&&arr[i]>min){
            second=arr[i];
         }
    }
    printf("%d",second);
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