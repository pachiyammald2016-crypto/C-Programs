#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int sum=0;
    int avg;
    int count=0;
    for(int j=0;j<size;j++){
        sum+=arr[j];
    }
     avg=sum/size;
    for(int s=0;s<size;s++){
        if(arr[s]>avg){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}