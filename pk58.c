#include<stdio.h>
int sum(int arr[],int size){
    int n=0;
    for(int i=0;i<size;i++){
        n+=arr[i];
    }
    printf("%d",n);
    return 0;
}
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    sum(arr,size);
    return 0;
}