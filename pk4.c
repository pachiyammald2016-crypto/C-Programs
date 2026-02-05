#include<stdio.h>
int main(){
    int r,c;
    scanf("%d%d",&r,&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int oddcount=0;
    int evencount=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(arr[i][j]%2==0){
                evencount++;
            }
            else{
                oddcount++;
            }
        }
    }
    printf("evencount: %d\n",evencount);
    printf("oddcount: %d",oddcount);
    return 0;
}