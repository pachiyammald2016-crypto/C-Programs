#include<stdio.h>
int sum(int a,int b){
    int c=1;
    for(int i=1;i<=b;i++){
        c*=a;
    }
    return c;
}
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    int num=sum(a,b);
    printf("%d",num);
    return 0; 
}