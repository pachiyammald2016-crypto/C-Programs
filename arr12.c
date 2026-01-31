#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",&k);
    k=k%size;
    for(int j=0;j<k;j++){
        int temp=arr[0];
        for(int s=0;s<size-1;s++){
           arr[s]=arr[s+1];
        }
        arr[size-1]=temp;
    }
    for(int m=0;m<size;m++){
        printf("%d ",arr[m]);
    }
    return 0;
}