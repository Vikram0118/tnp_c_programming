#include<stdio.h>
#include<conio.h>

int gcd(int a, int b);

int main() {
    int f1n, f1d, f2n, f2d, an, ad;
    printf("ENTER THE NUMBER : ");
    scanf("%d/%d", &f1n, &f1d);
    printf("ENTER THE NUMBER : ");
    scanf("%d/%d", &f2n, &f2d);

    if(f1d==0 || f2d ==0){
        printf("THE DENOMENATOR OF THE GIVEN FRACTION IS ZERO. SO THE ADDITION IS NOT POSSIBLE");
        return 0;
    }
    if(f1n==0){
        printf("THE ADDITION OF THE TWO FRACTIONS IS : %d/%d", f2n, f2d);
        return 0;
    } else if(f2n ==0){
        printf("THE ADDITION OF THE TWO FRACTIONS IS : %d/%d", f1n, f1d);
        return 0;
    }

    ad = f1d * f2d;
    printf("DENOMENATOR : %d \n", ad);
    an = (f1n * f2d) + ( f2n * f1d);
    printf("NUMERATOR : %d \n", an);

    int d = gcd(an, ad);

    printf("THE ADDITION OF TWO FRACTION IS : %d / %d ", an/d, ad/d);
}

int gcd(int a, int b) {
    int c = (a<b)?a:b;
    for(int i=c; i>=1; i--){
        if(a%i ==0 && b%i==0){
            return i;
        }
    }
}