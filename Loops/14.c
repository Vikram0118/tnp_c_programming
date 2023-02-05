// Friendly pair or not (Amicable or not)

#include<stdio.h>

int main() {
    int a=6 , b= 28, aSum =0, bSum =0;

    for(int i =1; i<a; i++){
        if(a%i == 0){
            aSum += i;
        }
    }
    for(int i =1; i<b; i++){
        if(b%i == 0){
            bSum += i;
        }
    }

    if((aSum/a) == (bSum/b)){
        printf("%d AND %d ARE FRIENDLY PAIR", a, b);
    } else{
        printf("%d AND %d ARE NOT FRIENDLY PAIR", a, b);
    }


}