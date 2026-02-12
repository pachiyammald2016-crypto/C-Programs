#include<stdio.h>
void print(int arr[],int size){
    int *p=arr;
    int max=0;
    for(int i=0;i<size;i++){
        if(*(p+i)>max){
            max=*(p+i);
        }
        }
    printf("%d",max);
}
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    print(arr,size);
    return 0;
}