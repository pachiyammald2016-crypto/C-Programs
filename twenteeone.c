#include <stdio.h>

int main() {
    int binary,decimal=0,base=1,lastDigit;
    scanf("%d",&binary);

    while(binary>0) {
    lastDigit=binary%10;       
    decimal+=lastDigit*base;   
    base*=2;                     
    binary/=10;                  
    }
    printf("%d\n",decimal);
    return 0;
}
