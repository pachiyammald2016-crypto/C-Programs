#include<stdio.h>
int sum(int a,int b){
    int num=0;
   printf("enter the choice:\n");
   printf("1.+\n");
   printf("2.-\n");
   printf("3.*\n");
   int k;
   scanf("%d",&k);
   switch(k){
    case 1:
    num=a+b;
    printf("%d",num);
    break;

     case 2:
    num=a-b;
    printf("%d",num);
    break;

     case 3:
    num=a*b;
    printf("%d",num);
    break;
   } 
}
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    int num=sum(a,b);
    return 0;
}