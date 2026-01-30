#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int vibration;
    int i=1;
    int unsafeCount=0;
    int cons=0;
    int breakdown=-1;
    while(i<=n){
        scanf("%d",&vibration);
        if(vibration>70){
            unsafeCount++;
            cons++;
            if(cons==3&&breakdown==-1){
                breakdown=i;
            }
        } 
        else{
            cons=0;
        }
        i++;
    }
    if(breakdown!=-1)
        printf("Breakdown At Reading: %d\n",breakdown);
        printf("Unsafe Readings: %d\n",unsafeCount);
    return 0;
}

