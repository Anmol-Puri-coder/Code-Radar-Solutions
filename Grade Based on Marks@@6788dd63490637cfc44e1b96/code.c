#include <stdio.h>
int main()
{
    int x;
    char a = 'A';
    char b = 'B';
    char c = 'C';
    char d = 'D';
    char f = 'F';
    scanf("%d",&x);
    if(x>=90){
        printf("%c",a);
        return 0;
    }
    else if(x >=80){
        printf("%c",b);
        return 0;
    }
    else if(x >=70){
        printf("%c",c);
        return 0;
    }
    else if (x>=60){
        printf("%c",d);
    }
    else{
        printf("%c",f);
    }
    return 0;
}