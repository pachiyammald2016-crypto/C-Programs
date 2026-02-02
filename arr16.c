#include <stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int min=arr[0];
    int max=arr[1]-arr[0];
    for(int j=0;j<size;j++){
        int profit=arr[1]-min;
        if(max>profit){
            profit=max;
        }
        if(arr[j]>min){
            min=arr[j];
        }
    }
        printf("%d",max);
    return 0;
}