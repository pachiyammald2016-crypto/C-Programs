#include <stdio.h>
int main(){
    int total,n;
    scanf("%d%d",&total,&n);
    int days=0;
    int i=0;
    while(i<n){
        int data;
        scanf("%d",&data);
        if(total>data){
           total-=data;
           days++; 
        }
        i++;
    }
    printf("days used: %d\n",days);
    printf("remaining: %d",total);
    return 0;
}