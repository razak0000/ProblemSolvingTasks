import java.util.Scanner;

public class task1{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String a;
        System.out.println("enter a string");
        a = sc.next();
        count_of_string(a);
    sc.close();
    }

      
   public static void count_of_string(String a){
       char[] arr = a.toCharArray();
       int l = a.length();
       int vcount = 0;
       int Ccount = 0;
       for(int i=0;i<l;i++){
             if (arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u') {
                 vcount++;
             }else{
                Ccount++;
             }
            }
            System.out.println("number of vowels is "+vcount);
            System.out.println("number of consonants is "+Ccount);

       }
   }
