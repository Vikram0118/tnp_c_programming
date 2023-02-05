#include<stdio.h>
#include<conio.h>

int main() {

    // int a[] = {-2,1,-3,4,-1,2,1,-5,4};
    int a[] = {1, -2, -3, 4, -5, -6, 7, 8, 9};
    int length = sizeof a / sizeof a[0];
    int i=0, cmv=0, pmv=-9999, s=0, e=0;

    for(i =0; i<length; i++){

        cmv += a[i];
        
        if(pmv < cmv){
            pmv = cmv;
            e = i;
        }

        if(cmv < 0){
            cmv =0;
            s= i+1;
            e=0;
        }
    }

    printf("LARGEST SUM OF SUB ARRAY : %d \n", pmv);
    printf("LARGEST SUM OF SUB ARRAY STARTING FROM INDEX %d  TO INDEX %d \n", s, e);

    for(int j=s; j<=e; j++){
        printf("%d ", a[j]);
    }
    return 0;
}
