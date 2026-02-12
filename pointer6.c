#include<stdio.h>
void reverse(int arr[],int size){
    int *p=arr;
    int num=size;
    for(int i=0;i<size;i++){
        int temp=*(p+i);
        *(p+i)=num-i;

    }
    for(int i=0;i<size;i++)
    {
        printf("%d ",*(p+i));
    }
}
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    reverse(arr,size);
    return 0;
}