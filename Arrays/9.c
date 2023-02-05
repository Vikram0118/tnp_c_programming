#include<stdio.h>
#include<conio.h>

int main(){
    int a[] ={1, 2, 3, 5, 6};
    int i, sum =0;
    int length = sizeof a/ sizeof a[0];

    for(i=0; i<length; i++){
        if(a[i]%2 ==0 || a[i]%3 ==0){
            sum += a[i];
        }
    }

    printf("THE SUM OF ALL THE ELEMENT IN THE ARRAY THAT IS THEIR DIVISIBLE BY 2 OR 3 IS : %d", sum);


    return 0;
}