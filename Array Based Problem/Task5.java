package placementclass.skill;

import java.util.Arrays;

public class Task5 {

	static int[] numberToArray(int a) {
		String number = Integer.toString(a);
		int[] num = new int[number.length()];
		for (int i = 0; i < number.length(); i++) {
            num[i] = Character.getNumericValue(number.charAt(i));
        }	
		return num;
	}
	
	static int arrayToNumber(int a[]) {
			StringBuilder numberString = new StringBuilder();
			for(int d :a ) {
				numberString.append(d);
			}
			int numbedDigits = Integer.parseInt((numberString.toString()));
		return numbedDigits;
	}
	
	public static void main(String[] args) {
		int digits[] = {9};
		System.out.println("Given array: "+ Arrays.toString(digits));
		int added = arrayToNumber(digits) +1;
		System.out.println(Arrays.toString(numberToArray(added))); 
	}

}