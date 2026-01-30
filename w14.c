#include <stdio.h>

int main() {
    int data,n;
    scanf("%d%d",&data,&n);
    int day=0;
    int remaining=data;
    int usage;
    while(day<n) {
        scanf("%d",&usage);
        if(usage<remaining){
        remaining-=usage;
        }
        day++;
    }
    printf("Exhausted Day: %d\n",remaining);
    printf("%d",remaining< 0 ?-remaining:0);

    return 0;
}
