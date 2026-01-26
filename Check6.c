#include<stdio.h>
int main(){
    char m;
    scanf("%c",&m);
    if(m=='a'||m=='e'||m=='i'||m=='o'||m=='u'){
        printf("Vowel");
    }
    else{
        printf("Consonant");
    }
    return 0;
}