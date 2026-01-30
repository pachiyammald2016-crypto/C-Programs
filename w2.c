#include <stdio.h>
int main(){
    int n,initial;
    scanf("%d%d",&n,&initial);
    int count=0;
    int i=0;
    while(i<n){
        int amount;
        scanf("%d",&amount);
        initial+=amount;

        if(initial<2000){
           count++;

        }
        i++;
    }
    printf("%d\n",initial);
    printf("%d",count);
    return 0;
}