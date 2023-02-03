#include<stdio.h>
#include<conio.h>

int  main() {

    int a[] = {1, 1, 2, 2, 3,4, 4, 5, 5, 3, 1, 3};
    int length = sizeof(a) / sizeof(a[0]);
    printf("%d \n", length);
    int i, j, count=0;

    for(i =0; i<length; i++){
        for(j=i; j<length; j++){
            if(a[j]<a[i]){
                a[i] = a[i] - a[j];
                a[j] = a[i] + a[j];
                a[i] = a[j] -a[i];
            }
        }
    }

    for(int i=0; i<length; i++){
        // printf((a[i] == a[i+1]) ? 0 : "%d ",a[i] ); // to print all the distinct element
        if(a[i] != a[i+1]){
            count++;
        }
    }
    printf("\nNUMBER OF DIDTINCT ELEMENT : %d ", count);
}