#include<stdio.h>
int areArraysEqual(int arr1[], int arr2[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr1[i] != arr2[i])
            return 0; // Not equal
    }
    return 1;
}
void reverse(int arr,int size){
    int start = 0; 
    int end = size-1;
    while(start<end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main()
{
    int a;
    scanf("%d",&a);
    int arr[a],arr1[a];
    for(int i=0;i<a;i++){
        scanf("%d",arr[i]);
        arr1[i] = arr[i];
    }
    reverse(arr1,a);
    if(areArraysEqual(arr,arr1,a)){
        printf("YES");
    }
    else{
        printf("NO");
    }
}



