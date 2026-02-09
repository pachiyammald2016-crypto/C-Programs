#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int count;
    int max=arr[0];
    for(int i=0;i<size;i++){
        count=0;
        for(int j=1;j<size;j++){
            if(arr[i]==arr[j]){
                count=arr[i];
            }
        }
        if(count>max){
            max=count;
        }
    }
    printf("%d",count);
    return 0;
}