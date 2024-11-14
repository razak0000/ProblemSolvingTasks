package placementclass.skill;
import java.util.Arrays;


public class Task6 {
    public static void sum6(){
        int[] num={4,3,2,1};
        int sum=0;
        int n=num.length;
        for(int i=0;i<num.length;i++){
            int fnum=num[i];
            sum=(sum*10)+fnum;
        }
        int fsum=sum+1;
        while(fsum!=0){
            int last=fsum%10;
            num[n-1]=last;
            fsum=fsum/10;
            n--;
    
        }
        System.out.println(Arrays.toString(num));
    }
    public static void main(String[] args) {
		sum6();
	}
    
}
