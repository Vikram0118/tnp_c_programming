#include<stdio.h>
#include<conio.h>
#include<stdbool.h>

int main() {
    int key, i =0, j=0;
    // int k=0;
    // int a[10] = {};
    // int b[2];
    // int sum;
    bool check = true;

    printf("ENTER ANY VALUE : ");
    scanf("%d", &key);

    for(i=1; i<=key; i++) {
        check = true;
        for(j=2; j<i; j++){ // checking if any of the number less than the current number gives a remainder of zero 
                            // if yes than it is not a prime number
            if(i%j == 0){
                check = false;
            }
        }

        if(check == true){
            printf("%d ", i);
        }
    }

    // int length = sizeof a / sizeof a[0];

    // for(i=0; i<length; i++){
    //     printf("%d \n",b[i]);
    // }

}
