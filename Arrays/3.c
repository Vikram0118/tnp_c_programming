#include<stdio.h>
#include<conio.h>

int main() {
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sum =0, length = sizeof(a) / sizeof(a[0]);
    
    for(int i=0; i<length; i++){
        sum += a[i];
    }

    printf("THE SUM OF ALL THE ELEMENT IN THE ARRAY = %d", sum);
}