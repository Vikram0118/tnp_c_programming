#include<stdio.h>
#include<conio.h>
int main() {
    int a[] = {1, 2, 3, 4, 5, 6};
    int length = sizeof(a) / sizeof(a[0]);
    int s=0 , e=length-1;

    while(s<e){
        a[e] = a[e] - a[s];
        a[s] = a[e] + a[s];
        a[e] = a[s] -a[e];

        s++;
        e--;
    }

    for(int i=0; i<length; i++){
        printf("%d ",a[i]);
    }
}