#include <stdio.h>

int main() {
    unsigned int a;
    scanf("%d",&a);
    unsigned int b = a & (1U << (sizeof(a)*8-1));
    if(b == 1){
        printf("Set");

    }
    else{
        printf("Not Set");
    }
    return 0;
}