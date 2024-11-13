import  java.util.Scanner;

public class task6 {

    static void wordCount(String str){
         char[] s = str.toCharArray();
         String[] arr = str.split(" ");
         System.out.println(arr.length);
      
        }
        
         
                
       
    
         public static void main(String[] args) {
            System.out.println("enter a sentence");
            Scanner sc = new Scanner(System.in);
            String str = sc.nextLine();
            wordCount(str);


     }
}
