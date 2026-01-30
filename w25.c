#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int amount;
    int i=1;
    int high=0;
    int cons=0;
    int fraud=-1;
    while(i<=n){
        scanf("%d",&amount);
        if(amount>=50000){
            high++;
            cons++;
        if (cons==3&&fraud==-1){
            fraud=i;
         }
        } 
        else{
        cons=0;
        }
        i++;
    }
    if (fraud!=-1)
        printf("Attempt: %d\n",fraud);
    printf("Transactions: %d\n",high);
    return 0;
}
