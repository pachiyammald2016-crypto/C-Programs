#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<size;j++){
        for(int k=size/2;k<size;k++){
            int temp=arr[j];
            arr[j]=arr[k];
            arr[k]=temp;
        }
    }
    for(int p=0;p<size;p++){
        printf("%d ",arr[p]);
    }
    return 0;
}