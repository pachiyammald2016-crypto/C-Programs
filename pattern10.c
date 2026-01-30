#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
           printf("%d",(i+j)%2);
        }
        for(int s=1;s>i;s++){
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}