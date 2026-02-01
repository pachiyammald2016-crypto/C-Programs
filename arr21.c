#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int sum;
    for(int j=1;j<size-1;j++){
        for(int k=1;k<size-1;k++){
        if(arr[j]<arr[j+1]&&arr[j+2]<arr[j+1]){
            sum++;
            size--;
        }
        else{
            sum=0;
        }
    }
    }
    printf("%d",sum);
    return 0;
}