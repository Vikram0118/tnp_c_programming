#include<stdio.h>
#include<conio.h>

int main() {
    int a = 12345;
    int b, ans=0;

    while(a>0) {
        b = a%10;
        ans = ans * 10 + b;
        a = a/10;
        // printf("%d - %d\n", a, ans);
        // if((float)a/10 > 0){
        //     ans *= 10;
        // }
    }

    printf("THE REVERSED NUMBER IS : %d",ans);
}