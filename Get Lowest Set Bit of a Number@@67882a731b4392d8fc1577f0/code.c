#include <stdio.h>

int main() {
    unsigned int a,c;
    int b;
    scanf("%u",&a);
    c = a & -a;
    printf("%u",c);
    return 0;
}