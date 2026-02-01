#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int sum;
    for(int j=0;j<size;j++){
        for(int k=1;k<size;k++){
            if(arr[1]==arr[k]){
                sum=arr[1];
                k++;
            }
            else{
                sum=-1;
            }
        }
        }
    printf("%d",sum);
}