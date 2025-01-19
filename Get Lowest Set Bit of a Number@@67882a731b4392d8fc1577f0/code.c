#include <stdio.h>

int main() {
    int a,c;
    int b;
    scanf("%d",&a);
    c = a & -a;
    printf("%d",c);
    return 0;
}