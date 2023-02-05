#include<stdio.h>
#include<conio.h>

int main() {

    int a[5] = {1, 2, 3, 4, 5};
    int length = sizeof a /sizeof a[0];

    for(int i=0; i<length; i++){
        if(i%2 == 0){
            // printf("ascend \n");
            for(int j=i; j<length; j++){
                for(int k=j; k<length; k++ ){
                    if(a[k]>a[j]){
                        a[j] = a[j] - a[k];
                        a[k] = a[j] + a[k];
                        a[j] = a[k] -a[j];
                    }
                }
            }
        }
        if(i%2 != 0){
            // printf("descend \n");
            for(int j=i; j<length; j++){ 
                for(int k=j; k<length; k++ ){
                    if(a[k]<a[j]){
                        a[j] = a[j] - a[k];
                        a[k] = a[j] + a[k];
                        a[j] = a[k] -a[j];
                    }
                }
            }
        }
        
    }

    for(int x=0;x<length; x++) {
        printf("%d ", a[x]);

    }

    return 0;
}