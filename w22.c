#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int attempt;
    int i=1;
    int totalFailed=0;
    int consecutiveFailed=0;
    int lockAttempt=-1;

    while(i<=n){
        scanf("%d",&attempt);

        if(attempt==0){
            totalFailed++;
            consecutiveFailed++;
            if(consecutiveFailed==3&&lockAttempt==-1){
                lockAttempt=i;
            }
        } 
        else{          
            consecutiveFailed=0;
        }
        i++;
    }
    if (lockAttempt!=-1)
        printf("Lock Triggered: %d\n",lockAttempt);
        printf("Total Failed: %d\n",totalFailed);
    return 0;
}
