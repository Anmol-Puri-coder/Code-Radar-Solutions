#include <stdio.h>
int main(){
    int a,s,d;
    scanf("%d %d %d",&a,&s,&d);
    if(a > s && a>d){
        printf("%d",a);
    }
    else{
        if(s>d){
            printf("%d",s);
        }
        else{
            printf("%d",d);
        }
    }
    return 0;
}