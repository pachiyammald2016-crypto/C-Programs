#include<stdio.h>
int main(){
        int size;
        scanf("%d",&size);
        int arr[size];
        for(int i=0;i<size;i++){
           scanf("%d",&arr[i]); 
        }
        int max=1;
        for(int j=1;j<size;j++){
            if(arr[j]>arr[j-1]){
                    max++;
                
            }
            else{
                max=1;
            }

            }
        printf("%d",max);
        return 0;
    }
