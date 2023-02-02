#include<stdio.h>
#include<conio.h>

int main() {

    int a = 33;
    int aCopy = a;
    int count = 0 ;

    while(aCopy>0) {
        aCopy = aCopy/10;
        count ++;
    }

    printf("THE NUMBER OF DIGIT IN %d IS : %d",a,count);
}