package placementclass.skill;


public class Task3 {
    public int minSubArrayLen(int target, int[] nums) {
        int minLength = Integer.MAX_VALUE; 
        int left = 0;
        int sum = 0; 

        for (int right = 0; right < nums.length; right++) {
            sum += nums[right];

           
            while (sum >= target) {
                minLength = Math.min(minLength, right - left + 1); 
                sum -= nums[left]; 
                left++; 
            }
        }

        return minLength == Integer.MAX_VALUE ? 0 : minLength;
    }

    public static void main(String[] args) {
        Task3 solution = new Task3();
        int[] nums = {1, 3, 1, 1, 1, 3};
        int target = 7;
        int result = solution.minSubArrayLen(target, nums);
        System.out.println("Minimal length of subarray: " + result);
    }
}
