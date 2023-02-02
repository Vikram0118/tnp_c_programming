#include<stdio.h>
#include<conio.h>

int factorial(int key){
    if(key==1){
        return 1;
    } else {
        return key * factorial(key-1);
    }    
}

int main() {
    int key;
    printf("ENTER THE NUMBER : ");
    scanf("%d", &key);
    int ans =1;

    printf("\nFACTORIAL OF THE GIVEN NUMBER IS : %d",factorial(key));

    // for(int i=1; i<=key; i++){
    //     ans *= i;
    // }
    // printf("\nFACTORIAL OF THE GIVEN NUMBER IS : %d",ans);

    return 0;
}
