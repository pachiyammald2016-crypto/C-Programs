#include <stdio.h>
int main() {
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<size-1;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    int product1=arr[0]*arr[1];
    int product2=arr[size-1]*arr[size-2];
    if(product1>product2){
        printf("%d",product1);
    }
    else{
        printf("%d",product2);
    }
    return 0;
}
