#include<stdio.h>
int main(){
    int n;
    char ch='A';
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int s=1;s<=n-i;s++){
            printf(" ");
        }
        for(int j=1;j<=2*i-1;j++){
            printf("%c",ch++);
        }
        ch=ch-i;
        for(int j=1;j<i;j++){
            printf("%c",ch--);
        }
        printf("\n");
    }
    return 0;
}