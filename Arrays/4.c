#include<stdio.h>
#include<conio.h>

int main() {
    int a[] = {1, 1, 2, 2, 3, 3};
    int length = sizeof(a) / sizeof(a[0]);
    printf("%d \n", length);
    int i, j, count=1; 
    // int pre;

    for(i =0; i<length; i++){
        for(j=i; j<length; j++){
            if(a[j]<a[i]){
                a[i] = a[i] - a[j];
                a[j] = a[i] + a[j];
                a[i] = a[j] -a[i];
            }
        }
    }

    // pre = a[0];

    for(int i=0; i<length; i++){
        // printf("%d --i %d --i+1  \n", a[i], a[i+55]);
        if(a[i] == a[i+1]){
            count++;
        } else {
            printf("%d OCCURS %d TIMES \n", a[i], count );
            count =1;
            // pre = a[i];
        }
    }
}