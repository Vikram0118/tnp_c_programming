
#include<stdio.h>
#include<stdbool.h>

int main(){
    int a[] = {3, 2, 3, 1, 2, 2};
    int length = sizeof a / sizeof a[0];
    int i, j, k, nod =0, count =0, position =0;
    bool flag  ;

    printf("\nINPUT ARRAY  : \n");
    for(i =0; i<length; i++){
        printf("%d ", a[i]);
    }

   for(i =0; i<length; i++){
        for(j=i; j<length; j++){
            if(a[j]<a[i]){
                a[i] = a[i] - a[j];
                a[j] = a[i] + a[j];
                a[i] = a[j] - a[i];
            }
        }
    }

    for(i=0 ; i<length ; i++){
        if(a[i] == a[i+1]){
            continue;
        } else {
            nod ++;
        }
    }

    int frequenecy[nod][2];

    for(i =0; i<nod; i++){
        frequenecy[i][0] =  0;
        frequenecy[i][1] = 0;
    }
    
    flag = true;
    for(i=0; i<length ;i++){
        flag = true;

        for(k=0; k<count; k++){
            if(frequenecy[k][0] == a[i]){
                flag = false;
                frequenecy[k][1]++;
                break;
            }
        }
        
        if(flag == true){
            frequenecy[count][0] = a[i];
            frequenecy[count][1] = 1;
            count ++;
        }
    }

    for(i =0; i<nod; i++){
        for(j=i; j<nod; j++){
            if(frequenecy[i][1]<frequenecy[j][1]){
                frequenecy[i][1] = frequenecy[i][1] - frequenecy[j][1];
                frequenecy[j][1] = frequenecy[i][1] + frequenecy[j][1];
                frequenecy[i][1] = frequenecy[j][1] - frequenecy[i][1];

                frequenecy[i][0] = frequenecy[i][0] - frequenecy[j][0];
                frequenecy[j][0] = frequenecy[i][0] + frequenecy[j][0];
                frequenecy[i][0] = frequenecy[j][0] - frequenecy[i][0];
            }
        }
    }

    for(k =0 ; k<nod; k++){
        for(i =0 ; i<length; i++){
            if(a[i] == frequenecy[k][0]){
                int temp = a[i];
                a[i] = a[position];
                a[position] = temp;
                position = position + 1;
            }
        }
    }   

    printf("\nSORTED BASED ON FREQUENCY : \n");
    for(i =0; i<length; i++){
        printf("%d ", a[i]);
    }



    return 0;
}
