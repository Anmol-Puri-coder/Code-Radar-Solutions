#include<stdio.h>
int main(){
    int a,b;
    scanf("%d",&a);
    if(a%4 == 0){
        if(a%100 == 0){
            if(a%400 == 0){
                printf("Not a Leap Year");
            }
            else{
                printf("Leap Year");
            }
        }
        else{
            printf("Leap Year");
        }
    }
    else{
        printf("Not a Leap Year");
    }
    return 0;
}