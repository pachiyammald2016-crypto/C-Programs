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
    int rowtotal;
    for(int j=0;j<c;j++){
        rowtotal=0;
        for(int i=0;i<r;i++){
            rowtotal+=arr[j][i];
        }
         printf("%d\n",rowtotal);
    }
    int columntotal;
    for(int i=0;i<r;i++){
        columntotal=0;
        for(int j=0;j<c;j++){
            columntotal+=arr[i][j];
        }
        printf("%d",columntotal);
    }
    return 0;
}