#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int prev,curr;
    int i=1;
    int totalDrops=0;
    int consecutiveDrops=0;
    int crashDay=-1;
    scanf("%d",&prev);
    while (i<n) {
        scanf("%d",&curr);
        if (curr<prev) {
            totalDrops++;
            consecutiveDrops++;
            if (consecutiveDrops==3&&crashDay==-1) {
                crashDay=i+1;  
            }
        } else {
            consecutiveDrops=0;
        }
        prev=curr;
        i++;
    }
    if (crashDay!=-1){
        printf("Crash Day: %d\n",crashDay);
    }
    else{
      printf("Total Drops: %d\n",totalDrops);
    }
    return 0;
}
