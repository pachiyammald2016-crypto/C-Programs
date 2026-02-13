#include<stdio.h>
void sum(int arr[],int size,int target){
    int index=0;
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            index=i;
            break;
        }
    }
    printf("%d",index);
}
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int target;
    scanf("%d",&target);
    sum(arr,size,target);
    return 0;
}