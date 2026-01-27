#include<stdio.h>
int main(){
    int n,units,bill,subsidy=80;
    scanf("%d%d",&n,&units);

     if(units<=100){
        switch(n){
            case 1:
            bill=(units*3);
            printf("%d",bill);
            break;
            case 2:
            bill=(units*7);
            printf("%d",bill);
            break;
        }   
    }
     if(units>100){
        switch(n){
            case 1:
            bill=(100*3)+((units-100)*5)-subsidy;
            printf("%d",bill);
            break;
            case 2:
            bill=(100*7)+((units-100)*10);
            printf("%d",bill);
            break;

        }
    }
    if(units>200){
        switch(n){
            case 1:
            bill=(100*3)+((units-100)*5)+((units-200)*7)-subsidy;
            printf("%d",bill);
            break;
            case 2:
            bill=(100*7)+((units-100)*10)+((units-200)*10);
            printf("%d",bill);
            break;

        }
    }
    return 0;

}