import  java.util.Scanner;

public class task3 {

    static void Revv(String str){
           char[] a = str.toCharArray();
           int l = a.length;
           String rever = "";
           for(int i = 0; i < l; i++){
                 rever += a[l-1 -i];
           }
           System.out.println(rever);
       }
    
         public static void main(String[] args) {
            Scanner sc = new Scanner(System.in);
            System.out.println("Enter a string: ");
            String str = sc.nextLine();
            Revv(str);
     }
}
