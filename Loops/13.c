// perfect numner or not

#include<stdio.h>
#include<stdbool.h>

int main() {
    int key, sum =0;
    char symbol1 = '=';
    char symbol2 = '+';
    bool flag = false;
    printf("ENTER A NUMBER : ");
    scanf("%d", &key); 
    
    for(int i =1; i<key; i++){
        sum += i;
        if(sum == key){
            for(int j =1; j<=i; j++){
                printf("%d %c ", j, (j==i) ? symbol1 :  symbol2 );
            }
            printf("%d", key);
            printf(" \n%d IS PERFECT NUMBER \n", key);
            break;
        } else if(sum > key){
            printf("%d IS NOT A PERFECT NUMBER\n", key);
            break;
        }
    }
}