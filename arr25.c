#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    int sum=0,num=0;
    for(int i=0;i<size-1;i++){
        scanf("%d",&arr[i]);
        num=size*(size+1)/2;
    }
    int total=0;
    int final=0;
    for(int j=0;j<size-1;j++){
        total+=arr[j];
        final=num-total;
    }
    printf("%d",final);
    return 0;
}