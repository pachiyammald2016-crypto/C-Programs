#include<stdio.h>
int main(){
    char n;
    scanf("%c",&n);
    for(char i='A';i<=n;i++){
        for(char j='A';j<=i;j++){
            printf("%c ",i);
        }
        printf("\n");
    }
    return 0;
}