#include <stdio.h>
int main()
{
    int a,b;
    b = a;
    scanf("%d",&a);
    for(int i = 1;i<=a;i++){
        for(int i = 0;i<b;i++){
            printf("*");
        }
        b+=2;
        printf("\n");
        
    }
    return 0;
}