#include<stdio.h>
#include<math.h>

int main() {
    int a[] = {10, 36, 54, 89, 12};
    //finding the length of the array
    int length = sizeof a / sizeof a[0];
    int weights[length];
    int i=0, j=0;
    //initializing the weight array to 0
    for(int i=0; i<length; i++){
        weights[i] = 0;
    }
    
    for( i=0; i<length; i++){
        // checking if thr number is a perfect square or not
        int temp = sqrt(a[i]);

        if((temp*temp) == a[i]){
            weights[i] += 5;
        }
        // checking if the number is multiple of 4 and divisible by 6
        if(a[i] % 4==0 && a[i] % 6 ==0 ){
            weights[i] += 4;
        }  
        // checking if the number is even or not
        if(a[i] % 2 ==0){
            weights[i] += 3;
        }
    }

    // biible sorting thr array in decresing order with bubble sort
     for(i =0; i<length; i++){
        for(j=i; j<length; j++){
            if(weights[j]>weights[i]){
               weights[i] =weights[i] -weights[j];
               weights[j] =weights[i] +weights[j];
               weights[i] =weights[j] -weights[i];

               a[i] =a[i] -a[j];
               a[j] =a[i] +a[j];
               a[i] =a[j] -a[i];
            }
        }
    }

    // printing the array
    for(int i=0; i<length; i++){
        printf("%d - %d \n", a[i], weights[i]);
    }
}