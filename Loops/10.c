#include<stdio.h>
#include<stdbool.h>

int fibonaci(int n);
int fibonaciRecursion(int n);

int main() {

    int n=0;
    printf("ENETR A NUMBER : ");
    scanf("%d", &n);

    // fibonaci(n);
     
    // for(int i=0; i<=n; i++){
    //     printf("%d ",fibonaciRecursion(i));
    // }

    // int current =0;
    // for(int i=0; i<=n; i++){
    //     current = fibonaciRecursion(i);
    //     if(current <= n){
    //         printf("%d ",current);
    //     }
    // }

}

// normal

int fibonaci(int n){
    printf("0 ");
    printf("1 ");
    bool check = true;
    int i =0, j = 1, ans = 0;
    while(ans<n){
        ans = i + j;
        if( ans < n){
            printf("%d ", ans);
            if(check == true){
                i = ans;
                check = false;
            } else {
                j = ans;
                check = true;
            }
        }
    }
}

// using recursion

int fibonaciRecursion(int n){
    if( n == 0){
        return 0;
    } else if(n == 1){
        return 1 ;
    } else {
        return (fibonaciRecursion(n-1) + fibonaciRecursion(n -2));
    }
}