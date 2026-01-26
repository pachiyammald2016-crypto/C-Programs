#include<stdio.h>
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    printf("Enter :\n");
    printf("1.add\n");
    printf("2.sub\n");
    printf("3.mul\n");
    int p;
    scanf("%d",&p);
    switch(p){
        case 1:
          printf("%d",n+m);
          break;

        case 2:
          printf("%d",n-m);
          break;

        case 3:
          printf("%d",n*m);
          break;

    }
    return 0;
}