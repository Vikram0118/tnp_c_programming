#include<stdio.h>
#include<conio.h>
#include<math.h>

int main() {
    int key=0;
    printf("ENTER A NUMBER : ");
    scanf("%d", &key);
    int dig=0, count=0,ans =0;
    int keyCopy = key;

    while(keyCopy>0) {
        keyCopy /= 10;
        count++;
    }
    keyCopy = key;
    printf("%d \n", count);
    while(key>0) {
        dig = key%10;
        ans += pow(dig , count);
        printf("%d \n", ans);
        key /= 10;
    }

    if(ans==keyCopy) {
        printf("THE GIVEN NUMBER IS AN AMSTRONG NUMBER ");
    } else {
        printf("THE GIVEN NUMBER IS NOT AN AMSTRONG NUMBER");
    }

    return 0;
}