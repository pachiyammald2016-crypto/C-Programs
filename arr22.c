#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int sum;
    for(int j=0;j<size;j++){
        for(int k=0;k<size;k++){
        if(arr[k]==1){
            sum=1;
            k++;
        }
        if(arr[k]<=0){
            if(arr[k]==-1){
                sum=-1;
            }
        }
    }
}
printf("%d",sum);
return 0;
}