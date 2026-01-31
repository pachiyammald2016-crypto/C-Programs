#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    int count=0;
    for(int j=0;j<size;j++){
        if(arr[j]>max){
            max=arr[j];
            if(max==arr[j]){
                count++;
        }
    }
    }
    int second=arr[0];
    for(int k=0;k<size;k++){
        if(arr[k]>second&&arr[k]<max){
            second=arr[k];
        }
    }
    if(count>1){
        printf("highest repeated\n");
    }
    else{
    printf("large: %d\n",max);
    }
    printf("second: %d",second);
    return 0;
}