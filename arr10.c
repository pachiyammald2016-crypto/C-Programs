#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    int sum=0;
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<size;j++){
        for(int k=j+1;k<size;k++){
        if(arr[j]==arr[k]){
            for(int s=1;s<size-1;s++){
                arr[s]=arr[s+1];
            }
            size--;
            k--;
        }
        }
    }
    for(int p=0;p<size;p++){
        printf("%d ",arr[p]);
    }
    return 0;

}