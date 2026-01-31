#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int max;
    for(int j=0;j<size;j++){
         max=arr[0];
         if(arr[j]>0){
            if(arr[j]<max){
                max=arr[j];
            }
         }
    }
    if(max>0){
    printf("%d",max);
    }
    else{
        printf("no positive");
    }
    return 0;
}