#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);

    int count;
    int i=0;
    int congestionMinutes=0;
    int currentStreak=0;
    int longestStreak=0;
    while(i<n){
        scanf("%d",&count);
        if (count>20){
            congestionMinutes++;
            currentStreak++;
            if (currentStreak>longestStreak) {
                longestStreak=currentStreak;
            }
        } 
        else{
            currentStreak=0;
        }
        i++;
    }
    printf("Congestion: %d\n",congestionMinutes);
    printf("Longest: %d\n",longestStreak);
    return 0;
}
