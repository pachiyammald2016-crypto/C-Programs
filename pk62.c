#include<stdio.h>
int sort(int arr[],int size){
    for(int i=0;i<size;i++){
        if(arr[i]>arr[i+1]){
            return 0;
        }
    }
    return 1;
}
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    if(sort(arr,size)){
        printf("sorted");
    }
    else{
        printf("not sorted");
    }
    return 0;
}