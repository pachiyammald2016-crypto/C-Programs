#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    for(int j=0;j<size;j++){
        if(arr[j]>max){
            max=arr[j];
        }
    }
    int sum=arr[0];
    for(int k=0;k<size;k++){
        if(arr[k]<max&&arr[k]>sum){
            sum=arr[k];
        }
    }
    printf("%d",sum);
    return 0;
}