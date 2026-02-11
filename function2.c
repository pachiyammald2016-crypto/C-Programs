#include<stdio.h>
int diff(int a,int b){
    int c;
    if(a>b){
        c=a;
    }
    else if(a<b){
        c=b;
    }
    else{
        c=a;
    }
    return c;
}
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    int large=diff(a,b);
    printf("%d",large);
    return 0;
}