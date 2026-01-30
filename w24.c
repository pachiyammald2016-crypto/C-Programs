#include <stdio.h>
int main() {
    int fuel,n;
    scanf("%d",&fuel);
    scanf("%d",&n);
    int burn;
    int i=1;
    int em=-1;
    while(i<=n){
        scanf("%d",&burn);
        if (fuel>=0){
            fuel=fuel-burn;
        if (fuel<0&&em==-1){
            em=i;
            fuel=-fuel; 
            }
        }
        i++;
    }
    if(em!=-1)
        printf("Emergency Stage: %d\n",em);
    printf("Fuel Wasted: %d\n",fuel);
    return 0;
}
