#include<stdio.h>
#include<conio.h>
#include<math.h>

int main() {
    int key;
    printf("ENTER A NUMBER : ");
    scanf("%d", &key);
    int dig, i=0, key2,j = key;

    while(key2>0) {
        key2 /= 10;
        i++;
    }
    key2 = i +1;
    i=0;
    while(key>0) {
        dig = key%10;
        i += pow(dig , key2);
        key /= 10;
    }

    if(i==key) {
        printf("THE GIVEN NUMBER IS AN AMSTRONG NUMBER");
    } else {
        printf("THE GIVEN NUMBER IS NOT AN AMSTRONG NUMBER");
    }

    return 0;
}