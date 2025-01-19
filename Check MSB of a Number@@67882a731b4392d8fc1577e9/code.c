#include <stdio.h>

int main() {
    unsigned int a;
    scanf("%u",&a);
    unsigned int b = 1U << 31;
    if(a & b){
        printf("Set");

    }
    else{
        printf("Not Set");
    }
    return 0;
}