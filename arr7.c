#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    int first=0;
    int count=0;
    int initial=0;
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
        if(arr[i]>initial){
            first=arr[i];
            count++;
        }
        initial=first;
    }
    if(count==size){
        printf("yes");
    }
    else{
        printf("no");
    }
    return 0;
}