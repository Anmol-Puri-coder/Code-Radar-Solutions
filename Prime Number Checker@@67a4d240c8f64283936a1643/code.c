#include <stdio.h>


int isPrime(int num){
    if(i==1){
        return 0;
    }
    for(int i =2;i<num;i++){
        if(num%i == 0){
            return 0;
        }
    }
    return 1;

}