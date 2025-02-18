#include <stdio.h>
int main(){
    char a;
    scanf("%c",&a);
    int b = int(a);
    if(b>=97 && b<=122){
        printf("Lowercase");
    }
    else if(b>=65 && b<=90){
        printf("Uppercase");
    }
    else{
        printf("Not an alphabet");
    }
}