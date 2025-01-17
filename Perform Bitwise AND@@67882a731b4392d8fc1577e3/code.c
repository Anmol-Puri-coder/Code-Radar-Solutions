#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d %d",&a,&b);
    int c = int(a & b);
    printf("%d",c);
    return 0;
}