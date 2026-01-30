#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int i=0;
    int count=0;
    int fail=0;
    while(i<n){
        int data;
        scanf("%d",&data);
        if(data==0){
            count++;
        }
        if(count>fail){
            fail=count;
        }
        else{
            count=0;
        }
        i++;
    }
    printf("%d",fail);
    return 0;

}