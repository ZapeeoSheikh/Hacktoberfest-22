//Name: Mahrukh khan
//Username: Suga7772
//Favorite Language: Java
import java.util.Scanner;

public class DigitCounterusingRecursion {

    //main class
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n=0;
        do{
            System.out.println( "1. Enter digit ");
            System.out.println("2. Quit ");
          n=input.nextInt();
       
        switch (n)
        {
        case 1:
            int num;
            System.out.println ("Enter a number to count digits: ");
            num = input.nextInt();
            System.out.println( "Number of digits in "+ num +" is " + countDigits(num));
            break;
        case 2:
            System.out.println("Program terminated");
            break;
        default:
           System.out.println("Invalid input");
        }
    } while (n != 2);
        int number = input.nextInt();
        System.out.println("The number of digits in " + number + " is " + countDigits(number));
    }
    
    //recursive method to count digits
    public static int countDigits(long n) {
        if (n == 0)
            return 0;
        else
            return 1 + countDigits(n / 10);
    }
}
