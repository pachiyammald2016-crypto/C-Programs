#include<stdio.h>
int main(){
int n;
float m;
scanf("%d",&n);
scanf("%f",&m);
switch(n){
    case 1:
    if(m<=1){
        printf("normal speed");
        break;
    }
    if(m>1){
        printf("speed reduced");
        break;
    }

    case 2:
    if(m<=2){
        printf("normal speed");
        break;
    }
    else{
        printf("reduce");
        break;
    }

    case 3:
    if(m>2){
        printf("extra charges applied");
        break;
    }
}
return 0;
}