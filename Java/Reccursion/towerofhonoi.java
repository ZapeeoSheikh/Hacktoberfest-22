package Reccursion;

public class towerofhonoi {

    public static void honoi(int n, String src , String helper, String dest) {

        if (n==1) {
      System.out.println("move disk " + n +" from  " + src + " to "+ dest);

      return;
        }

        honoi(n-1,src, helper, dest);
        System.out.println("move disk " + n +" from  " + src + " to "+ dest);
        honoi(n-1,helper,dest,src);

}
    public static void main(String[] args) {

        int n = 3; //

        honoi(n,"A","B","C");
    }
}
