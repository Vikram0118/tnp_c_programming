public class two {
    public static void main (String[] args) {
        int a[] = {3, 30, 34, 5, 9};
        int length =a.length;
        String ans = "";

        for(int i =0; i<length; i++){
            String temp1 = ((Integer)a[i]).toString();
            for(int j=i; j<length; j++){
                String temp2 = ((Integer)a[j]).toString();
                int temp3 =0;
                if(temp1.charAt(0) < temp2.charAt(0)){
                   temp3 = a[i];
                   a[i] = a[j];
                   a[j] = temp3;
                }
                else if(temp1.charAt(0) == temp2.charAt(0)) {
                    int l1 = temp1.length();
                    int l2 = temp2.length();
                    int l3 = (l1>l2) ? l2 : l1;
                    for(int k=1; k<l3; k++){
                        if(temp1.charAt(k) < temp2.charAt(k)){
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
            ans += a[i];
        }

        for(int i=0; i<a.length ; i++){
            System.out.print(a[i]+" ");
        }
        System.out.println();
        System.out.println(ans);
    }

}
