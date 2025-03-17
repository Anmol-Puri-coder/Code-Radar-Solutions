#include<stdio.h>
int main()
{
    int a,b;
    b= 1;
    scanf("%d",&a);
    for(int i = 0;i<a;i++){
        for(int i = 0;i <b;i++){
            printf("* ");
        }
        printf("\n");
        b++;
    }
}