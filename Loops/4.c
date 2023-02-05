#include<stdio.h>
#include<conio.h>

int gcd(int a, int b) ;

int main() {
    int a =5;
    int b=10;
    int c = (a<b)?a:b; // traversing from the smaller number to 1
                        // i can do larger number to as well -- there won't be any performnace issues
    // int gcd=1;
    // for(int i=c; i>=1; i--){
    //     if(a%i == 0 && b%i == 0){
    //         // if(gcd<i){
    //             gcd=i;
    //             break;
    //         // }
    //     }
    // }
    printf("THE GCD OF THE TWO NUMBERS IS : %d",gcd(a, b));
    return 0;
}

//  Euclidean algorithm - finding the largest number than dividing each number 

int gcd(int a, int b) {
    if(b == 0) {
        return a;
    }
    return gcd(b, a % b);
}