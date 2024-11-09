import java.nio.charset.UnmappableCharacterException;
import  java.util.Scanner;

public class task4 {

    static void to_upper_and_lower(String str){
            String uppercase = str.toUpperCase();
            String lowercase = str.toLowerCase();
            System.out.println("Uppercase: " + uppercase);
            System.out.println("Lowercase: " + lowercase);
            
       }
    
         public static void main(String[] args) {
            Scanner sc = new Scanner(System.in);
            System.out.println("Enter a string: ");
            String str = sc.nextLine();
           to_upper_and_lower(str);
           sc.close();
     }
}
