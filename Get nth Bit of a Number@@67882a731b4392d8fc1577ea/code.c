#include <stdio.h>

int main() {
    int b,c;
    unsigned int a;
    scanf("%u %d",&a,&b);
    c = (a >> b) & 1;

    printf("%d",c);
    return 0;
}