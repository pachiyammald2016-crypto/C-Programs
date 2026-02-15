#include<stdio.h>
int merge(int arr[],int arr2[],int size1,int size2){
    for(int i=0;i<size1;i++){
        printf("%d ",arr[i]);
    }
    for(int i=0;i<size2;i++){
        printf("%d ",arr2[i]);
    }
    return 0;
}
int main(){
    int size1,size2;
    scanf("%d%d",&size1,&size2);
    int arr[size1];
    int arr2[size2];
    for(int i=0;i<size1;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<size2;i++){
        scanf("%d",&arr2[i]);
    }
    merge(arr,arr2,size1,size2);
    return 0;
}