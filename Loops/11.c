// Harshad Number 

#include<stdio.h>

int main() {
    int key, sum =0, l;
    printf("ENTER A NUMBER : ");
    scanf("%d", &key); 
    int cKey = key;

    while(cKey > 0){
        l = cKey % 10;
        sum += l;
        cKey /= 10;
    }

    if(key%sum == 0){
        printf("%d IS A HARSHAD NUMBER", key);
    } else {
        printf("%d IS NOT A HARSHAD NUMBER", key);

    }
}