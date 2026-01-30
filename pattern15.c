#include<stdio.h>
int main(){
    char n;
    scanf("%c",&n);
    for(char i=n;i>='A';i--){
        for(char j='A';j<=i;j++){
            printf("%c ",j);
        }
        printf("\n");
    }
    return 0;
}