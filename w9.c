#include<stdio.h>
int main(){
    int fuel,num;
    scanf("%d%d",&fuel,&num);
    int org=fuel;
    int i=0,sum=0;
    int count=0;
    int rem=0;
    while(i<num){
        int data;
        scanf("%d",&data);
         fuel-=data;
         if(fuel>=0){
            sum+=data;
            count++;
        }
        else{
            rem=data;
        }
          i++;
    }
     rem=org-sum+rem;
     if(rem<0){
        rem=0;
     }
    printf("trip: %d\n",count);
    printf("rem: %d",rem);
    return 0;
}