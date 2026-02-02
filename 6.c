#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int count=0,sum=0;
    for(int j=0;j<size;j++){
        if(arr[j]%2==0){
            count++;
        }
        else{
            sum++;
        }
    }
    printf("even: %d\n",count);
    printf("odd: %d",sum);
    return 0;
}