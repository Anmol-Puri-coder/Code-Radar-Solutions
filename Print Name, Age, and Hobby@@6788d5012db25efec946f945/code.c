#include <stdio.h>

int main() {
    char name[100],hobby[100];
    int age;

    scanf("%s",&name);
    scanf("%d",&age);
    scanf("%d",&hobby);
    
    printf("Name %s",name);
    printf("Age: %d",age);
    printf("Hobby: %s",hobby);
    return 0;
}