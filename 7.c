#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int count1=0,count2=0,count3=0;
    for(int j=0;j<size;j++){
        if(arr[j]>0){
            count1++;
        }
        if(arr[j]<0){
            count2++;
        }
        if(arr[j]==0){
            count3++;
        }
    }
    printf("positive: %d\n",count1);
    printf("negative: %d\n",count2);
    printf("zero: %d",count3);
    return 0;
}