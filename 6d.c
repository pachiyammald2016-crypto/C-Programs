#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int count=0,count1=0;
    for(int i=0;i<size;i++){
        if(arr[i]%2==0){
            count++;
        }
        else{
            count1++;
        }
    }
    printf("even count is: %d\n",count);
    printf("odd count is: %d",count1);
    return 0;
}