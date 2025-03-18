#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d",&a);
    b = a;
    for(int i = 1;i<=a;i++){
        for(int i = 0;i<b;i++){
            printf("*");
        }
        b+=2;
        printf("\n");
        
    }
    return 0;
}