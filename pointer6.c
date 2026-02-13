#include<stdio.h>
void reverse(int arr[],int size){
    int *p=arr;
    int temp;
    for(int i=0;i<size/2;i++){
        temp=*(p+i);
        *(p+i)=*(p+size-i-1);
        *(p+size-i-1)=temp;

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