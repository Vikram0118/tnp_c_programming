#include<stdio.h>
#include<conio.h>
#include<stdbool.h>

int main() {
    int key, i =0, j;
    bool check;
    printf("ENTER ANY VALUE : ");
    scanf("%d", &key);
    for(i=2; i<=key; i++) {
        check = true;
        for(j=2; j<i; j++){ // checking if any of the number less than the current number gives a remainder of zero 
                            // if yes than it is not a prime number
            if(i%j == 0){
                check = false;
            }
        }
        if(check == true){
            printf("%d \n", i);
        }
    }
}