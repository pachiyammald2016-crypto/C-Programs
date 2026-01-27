#include<stdio.h>
int main(){
    int n,age,t,s=300,AC=1000;
    scanf("%d%d",&n,&age);
    switch(n){
        case 1:
        if(age<=12){
            t=s-(s*0.50);
            printf("%d",t);
        }
        if(age>=60){
            t=s-(s*0.33);
            printf("%d",t);
        }
        if(age>12&&age<60){
            printf("%d",s);
        }
        break;

        case 2:
        if(age<=12){
            t=(AC*0.50)-AC;
            printf("%d",t);
        }
        if(age>=60){
            t=(AC*0.33)-AC;
            printf("%d",t);
        }
        if(age>12&&age<60){
            printf("%d",AC);
        }
        break;
    }
    return 0;
}