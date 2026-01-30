#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int count=0;
    int fail=0;
    int i=0;
    while(i<n){
        int data;
        scanf("%d",&data);
        if(data==1){
            count++;
        }
        if(data==0){
            fail++;
        }
        i++;
    }
    printf("Success: %d\n",count);
    printf("Failure: %d\n",fail);
    if(count>fail){
        printf("Status: Safe");
    }
    else{
        printf("Status: Risk");
    }
}