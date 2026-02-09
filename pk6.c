#include<stdio.h>
int main(){

    int arr[4][3]={{1,2,3},{4,5,6},{6,7,8},{3,4,5}};
    
    int row=sizeof(arr)/sizeof(arr[0]);
    int cols=sizeof(arr[0])/(sizeof(arr[0][0]));

    printf("%d\n",row);
    printf("%d",cols);

    return 0;
}