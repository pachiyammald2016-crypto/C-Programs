#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int min=arr[0];
    for(int j=0;j<size;j++){
        if(arr[j]<min){
            min=arr[j];
        }
    }
    printf("%d",min);
    return 0;
}