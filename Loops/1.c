#include<stdio.h>
#include<conio.h>

int main(){
    int a =5,b=52,c=30;
    
    // int ans ;
    // if(a>b){
    //     ans = a;
    // } else {
    //     ans = b;
    // }
    // if(c > ans){
    //     ans = c;
    // }
    // printf("THE LARGEST OF ALL THE THREE NUMBERS IS : %d", ans);

    // int largest = ( a > b ) ? ( a > c ? a : c ) : ( b > c ? b : c);
    // printf("THE LARGEST OF ALL THE THREE NUMBERS IS : %d", largest);

    printf("THE LARGEST OF ALL THE THREE NUMBERS IS : %d", ( a > b ) ? ( a > c ? a : c ) : ( b > c ? b : c));
}