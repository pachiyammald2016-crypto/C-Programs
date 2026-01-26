#include<stdio.h>
int main(){
   int n,m;
   scanf("%d%d",&n,&m);
   printf("Enter Choice: \n");
   printf("1.Add\n");
   printf("2.sub\n");
   printf("3.mul\n");
   printf("4.div\n");
   int k;
   scanf("%d",&k);
   switch(k){
    case 1:
    printf("%d",n+m);
    break;

    case 2:
    printf("%d",n-m);
    break;

    case 3:
    printf("%d",n*m);
    break;

    case 4:
    printf("%d",n/m);
    break;
   }
}