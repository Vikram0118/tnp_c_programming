#include<stdio.h>
#include<conio.h>

int main() {
    int a[] = {10,9,8,7,6,5,4,3,2,1};
    int j,i;
    int length = sizeof(a) / sizeof(a[0]);

    for(i =0; i<length; i++){
        for(j=i; j<length; j++){
            if(a[j]<a[i]){
                a[i] = a[i] - a[j];
                a[j] = a[i] + a[j];
                a[i] = a[j] -a[i];
            }
        }
    }
    printf("LENBTH : %d \n", length);
    printf("[ ");
    for(i =0; i<length/2; i++){
        printf("%d ",a[i]);
    }
    for(i =length-1; i>=length/2; i--){
        printf("%d ",a[i]);
    }
    printf("]");
}