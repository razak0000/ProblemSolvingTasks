package placementclass.skill;

public class Task4 {
    public static void task4() {
        int[] arr = {1, 2, 1, 3, 4, 2, 1, 3, 5, 6};
        int[] temp = new int[arr.length];
        int a = 0;
       

        for (int i = 0; i < arr.length; i++) {
            boolean check = true;
            for (int j = 0; j < a; j++) {
                if (temp[j] == arr[i]) {
                    check = false;
                    break;
                }
            }
            if (check) {
                temp[a] = arr[i];
                a++;
            }
        }
    
        for (int i = 0; i < a; i++) {
            System.out.println(temp[i]);
        }
    }

    public static void main(String[] args) {
        task4();
    }
}
