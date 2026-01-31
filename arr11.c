#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    int count1=0,count2=0;
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
        if(arr[i]%2==0){
            count1++;
        }
        else{
            count2++;
        }
    }
    printf("even: %d\n",count1);
    printf("odd: %d",count2);
    return 0;
}