#include<stdio.h>
#include<conio.h>
#include<stdbool.h>

bool isPrime(int n);

int main() {
    int key;
    bool flag;
    printf("ENTER ANY VALUE : ");
    scanf("%d", &key);

    for(int i=1; i<=key; i++){
        if(isPrime(i) && isPrime(key-i)){
            if((i + key-i) == key){
                printf("%d + %d = %d", i, key-i, key);
                return 0;
            }
        }
    }
    printf("THE GIVEN NUMBER CANNOT BE ADDED WITH TWO PRIME NUMBER");
}


bool isPrime(int n) {
    for(int j=2; j<n; j++){ // checking if any of the number less than the current number gives a remainder of zero  ---- if yes than it is not a prime number
        if(n%j == 0){
            return false;
        }
    }
}