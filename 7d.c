#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int positive=0,negative=0,zero=0;
    for(int i=0;i<size;i++){
        if(arr[i]>0){
            positive++;
        }
        if(arr[i]<0){
            negative++;
        }
        if(arr[i]==0){
            zero++;
        }
    }
    printf("positive: %d\n",positive);
    printf("negative: %d\n",negative);
    printf("zero: %d",zero);
    return 0;
}