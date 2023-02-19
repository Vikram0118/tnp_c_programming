package random_problems;
public class two {
    public static void main (String[] args) {
        // given array
        int a[] = {3, 30, 34, 5, 9};
        int length =a.length;
        String ans = "";
    
        // bubble sort 
        for(int i =0; i<length; i++){ 
            String temp1 = ((Integer)a[i]).toString(); // to compare i get the ith element in form of string
            for(int j=i; j<length; j++){
                String temp2 = ((Integer)a[j]).toString(); // to compare i get the jth element in form of string
                int temp3 =0;
                if(temp1.charAt(0) < temp2.charAt(0)){  // descending order based on the first character
                   temp3 = a[i];
                   a[i] = a[j];
                   a[j] = temp3;
                }
                else if(temp1.charAt(0) == temp2.charAt(0)) { // if the first character matches
                    int l1 = temp1.length();
                    int l2 = temp2.length();
                    int l3 = (l1>l2) ? l2 : l1;   // then i will get the length of both the character and compare to the lowest length 
                    for(int k=0; k<l3; k++){
                        if(temp1.charAt(k) < temp2.charAt(k)){  // again desending order
                            temp3 = a[i];
                            a[i] = a[j];
                            a[j] = temp3;
                            break;
                        }
                    } 
                    
                }
            }
        }

        for(int i=0; i<a.length ; i++){
            ans += a[i];                   // just appening the number to a string
        }

        for(int i=0; i<a.length ; i++){
            System.out.print(a[i]+" ");           
        }
        System.out.println();
        System.out.println(ans);
    }

}
