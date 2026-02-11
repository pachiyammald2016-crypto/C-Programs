#include<stdio.h>
float sum(int r){
    float c=(float)3.14*r*r;
    return c;
}
int main(){
    int r;
    scanf("%d",&r);
    float num=sum(r);
    printf("%0.2f",num);
    return 0;
}