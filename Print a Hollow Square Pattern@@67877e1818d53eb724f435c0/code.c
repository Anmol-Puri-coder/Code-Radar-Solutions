#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        printf("*");
    }
    printf("\n");
    for(int i=0;i<a-2;i++){
        printf("*");
        for(int j =1;j<a-1;j++){
            printf(" ");
        }
        printf("*");
        printf("\n");
    }
    for(int i=0;i<a;i++){
        printf("*");
    }
    printf("\n");
    return 0;
}