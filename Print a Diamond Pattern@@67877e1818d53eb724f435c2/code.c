#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d",&a);
    b = 1;
    for(int i =0;i<a;i += 2){
    for(int space= (a-i)/2;space >0;space--){
        printf(" ");
    }
    for(int j=1;j<=i;j++){
        printf("*");
    }
    }
    return 0;
}