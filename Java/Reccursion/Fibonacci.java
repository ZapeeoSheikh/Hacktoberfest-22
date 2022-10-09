package Reccursion;

public class Fabnacci {

    static int fab(int n){

    if(n < 2) return n;

         return fab(n-1) + fab(n-2);
    }

    public static void main(String[] args) {


        int  n =5;
        for (int i = 0; i <=n; i++) {

            System.out.println(fab(i));
        }
    }
}
