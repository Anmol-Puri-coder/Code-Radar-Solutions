#include <stdio.h>

int main() {
    unsigned int a,c;
    int b;
    scanf("%u %d",&a,&b);
    c = a & -a;
    printf("%u",c);
    return 0;
}