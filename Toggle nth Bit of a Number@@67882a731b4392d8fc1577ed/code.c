#include <stdio.h>

int main() {
    unsigned int  a;
    int b,c;
    scanf("%u %d",&a,&b);
    c = a ^ (1U << b);
    printf("%d",c);
    return 0;
}