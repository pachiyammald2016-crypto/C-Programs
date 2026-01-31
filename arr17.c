#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    int initial;
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
        initial=arr[i];
    }
    int temp;
    int num;
    int left=arr[0];
    int right=arr[size-1];
    while(left<=right){
        if(left!=right){
        printf("no");
        }
        else{
            printf("yes");
        }
        left++;
        right--;
        }
        
    return 0;

}
