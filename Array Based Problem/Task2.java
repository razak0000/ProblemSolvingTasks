package placementclass.skill;

public class Task2 {

	public static void Task2() {
		// TODO Auto-generated constructor stub
//		 int[] num = {0 , 2, 3, 4 ,1 , 6 , 4 ,0 ,3} ;
//		 int l = num.length;
//		 int[] sum = {};
//		 int s = 0;
//		for(int i=0;i<=l;i++) {
//			if(i >= 3 && i%3==0 ) {
//				int add = num[i-2] + num[i-3];
//				num[i-1] = add;
//			}
//		}
//		 for(int i=0 ;i<l;i++) {
//			 System.out.println(num[i]);
//		 }
		
		   int arr[]={1,2,1,2,4,3,0};
	        int target = 7;

	        for (int i=0;i<arr.length;i++){
	            for (int j=0;j<arr.length;j++){
	                
	                if(arr[i]+arr[j]==target){
	                    System.out.println("THE INDEX'S ARE :" + i +" "+ j +"\n");
	                }
	            }
	        }
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Task2();
      
	}

}
