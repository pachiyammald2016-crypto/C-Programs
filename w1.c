#include<stdio.h>
int main(){
    int n,count=0;
    scanf("%d",&n);
    int max=0;
    int current=0;
    int i=0;
    while(i<n){
        int p;
        scanf("%d",&p);
        if(p>70){
            count++;
            current++;
        }
            if(current>max){
                max=current;
            }
            else{
            current=0;
            }
    i++;
}
     printf("%d\n",count);
    printf("%d",max);
return 0;
   
}