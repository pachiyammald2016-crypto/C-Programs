#include<stdio.h>
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    printf("before swap:\n%d %d\n",a,b);
    swap(&a,&b);
    printf("after swap:\n%d %d",a,b); 
    return 0;
}