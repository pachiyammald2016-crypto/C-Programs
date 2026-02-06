#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
       scanf("%d",&arr[i]);
    }
    int target;
    scanf("%d",&target);
    int count=0;
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            count++;
        }
    }
    if(count==1){
        printf("yes");
    }
    else{
        printf("no");
    }
    return 0;
}