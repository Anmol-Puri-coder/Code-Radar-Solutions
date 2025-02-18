#include <stdio.h>

int main(){
    char a[100];
    scanf("%c",&a);
    printf("You entered: %99c",a);

    return 0;
}