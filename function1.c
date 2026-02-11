#include<stdio.h>
float sum(int p,int r,int t){
    float c=(float)(p*r*t)/100.0;
    return c;
}

int main(){
    int p,r,t;
    scanf("%d%d%d",&p,&r,&t);
    float final=sum(p,r,t);
    printf("%0.2f",final);
    return 0;
}