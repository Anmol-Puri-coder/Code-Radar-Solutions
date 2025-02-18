#include <stdio.h>
int main(){
    char a;
    scanf("%c",&a);
    b = a;
    if(b>='a' && b<='z'){
        printf("Lowercase");
    }
    else if(b>='A' && b<='Z'){
        printf("Uppercase");
    }
    else{
        printf("Not an alphabet");
    }
}