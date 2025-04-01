#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",arr[i]);
    }
    int arr2[] = arr;
    reverse(arr2);
    if(arr==arr2){
        printf("YES");
    }
    else{
        printf("NO");
    }
}
void reverse(int arr){
    int start = 0; 
    int end = sizeof(arr);
    while(start<end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}