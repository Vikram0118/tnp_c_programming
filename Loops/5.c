#include<stdio.h>
#include<conio.h>

int main() {
    int a =2;
    int b=3;
    int c = (a>b)?a:b;
    int gcd=1;
    for(int i=c; i>=1; i--){
        if(a%i == 0 && b%i == 0){
            if(gcd<i){
                gcd=i;
            }
        }
    }
    printf("THE LCM OF THE TWO NUMBERS IS : %d",(a*b)/gcd);
    return 0;
}

//  Euclidean algorithm - lcm is calculated using gcd