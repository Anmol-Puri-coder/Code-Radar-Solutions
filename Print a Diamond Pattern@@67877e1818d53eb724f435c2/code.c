#include <stdio.h>
int main()
{
    int a,b;
    b = 1;
    scanf("%d",&a);
    for(int i = 1;i<=a;i++){
        for(int j =1;j<=b;j++){
            printf("* ");

        }
        printf("\n");
        b = b+1;
    }
    return 0;
}