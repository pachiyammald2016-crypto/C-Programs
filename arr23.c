#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int sum=0;
    for(int j=0;j<size;j++){
       for(int k=j+1;k<size;k++){
        if(arr[j]==arr[k]){
                sum=1;
       }
    }
}
    if(sum==1){
        printf("no");
    }
    else{
        printf("yes");
    }
    return 0;
    
}