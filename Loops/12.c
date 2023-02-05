// Abundant number

#include<stdio.h>

int main() {
    int key, sum =0;
    printf("ENTER A NUMBER : ");
    scanf("%d", &key); 
    
    for(int i =1; i<key; i++){
        if(key%i == 0){
            sum += key;
        }
    }

    if(sum > key ){
        printf("%d IS A ABUNDANT NUMBER", key);
    } else {
        printf("%d IS NOT A ABUNDANT NUMBER", key);
    }
}