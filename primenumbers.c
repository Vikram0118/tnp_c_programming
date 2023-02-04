#include<stdio.h>
#include<conio.h>
#include<stdbool.h>

int main() {
    int key, i =0, j, k=0;
    int a[10] = {};
    int b[2];
    int sum;
    bool check;
    printf("ENTER ANY VALUE : ");
    scanf("%d", &key);

    for(i=2; i<=key; i++) {
        check = true;
        for(j=2; j<i; j++){ // checking if any of the number less than the current number gives a remainder of zero 
                            // if yes than it is not a prime number
            if(i%j == 0){
                check = false;
            }
        }
        if(check == true){
            a[k] = i;
            k++;
        }
    }

    int length = sizeof a / sizeof a[0];

    for(i=0; i<2; i++){
        printf("%d \n",b[i]);
    }

}
