package placementclass.skill;

public class Task1 {
	
	public static void sortArray() {
		 int[] num = {0 , 2, 3, 4 ,1 , 6 , 4 ,0 ,3} ;
		 int l = num.length;
		 int p = 0;
		
		 int c = 0;
		 for(int i=0 ; i<l;i++) {
			  if(num[i] != 0) {
				  int temp = num[i];
				  num[p] = temp;
				  p++;
				 }
			  else {
				  c++;
			  }
			  }
		 for(int i = c; i >= 0 ; i--)  {
			    int j = l-1;
			    num[j] = 0;
			    j--;
		  }
		 
		 
		 for(int i=0 ; i<l;i++) {
			 System.out.println(num[i]);
		 }
		 }
	

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		sortArray();

	}

}
