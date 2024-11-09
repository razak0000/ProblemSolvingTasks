import  java.util.Scanner;

public class task5 {

    static void isPalindrom(String str){
        char[] a = str.toCharArray();
        int l = a.length;
        String rever = "";
        for(int i = 0; i < l; i++){
              rever += a[l-1 -i];
        }
        if(str.equals(rever)){
            System.out.println(str + " is a palindrom");
            }
            else{
                System.out.println(str + " is not a palindrom");
                }
                
       }
    
         public static void main(String[] args) {
            Scanner sc = new Scanner(System.in);
            System.out.println("Enter a string: ");
            String str = sc.nextLine();
            isPalindrom(str);
            sc.close();
     }
}
